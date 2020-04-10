#include "kiselev_lang.h"
#include "ui_kiselev_lang.h"
#include "select.h"

#include <QAbstractButton>
#include <QMessageBox>
#include <QCalendarWidget>
#include "QStandardItemModel"
#include "QStandardItem"
#include "QtSql/QSqlDatabase"
#include "QSqlQuery"
#include <QAxObject>
#include <QFileDialog>
#include <QModelIndex>
#include <QTextEdit>
#include <QFileDialog>
#include <QTextStream>

//int flag;

kiselev_lang::kiselev_lang(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::kiselev_lang)
{
    ui->setupUi(this);
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/ilja-/Downloads/KR/base.db");
    db.open();
    slotSelect(1);

    iselect = new select();

    QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(slotButtonClicked()));

    QObject::connect(ui->pushButton_2, SIGNAL(clicked()), iselect, SLOT(show()));
    QObject::connect(iselect, SIGNAL (S(int)), this, SLOT(slotSelect(int)));

    QObject::connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(slotAdd()));

    QObject::connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(slotChange()));


}

kiselev_lang::~kiselev_lang()
{
    delete ui;
}

/////////////////////////////////////////
/// Формирование отчёта
///
QString m_strFileName = "";
void kiselev_lang:: slotButtonClicked()
{
    QString otch = "";
    QSqlQuery Katalog;
    Katalog.exec("SELECT Val FROM Katalog");
    QSqlQuery Otchet;
    Otchet.exec("SELECT Sale FROM Otchet");
    QSqlQuery name;
    name.exec("SELECT Name FROM Katalog");

    int sum=0;
    while ((Katalog.next())&&(Otchet.next())&&(name.next()))
    {
        QString nn = name.value(0).toString();
        int kk = Katalog.value(0).toInt();
        int oo = Otchet.value(0).toInt();
        int s = kk * oo;
        QString SS = QString::number(s);
        sum = sum + s;
        otch = otch + nn + " : " + "\n";
        otch = otch + Katalog.value(0).toString() + " рублей * " + Otchet.value(0).toString() + " штук = " + SS + " рублей\n";
        otch = otch + "\n";
    }
    QString SSum = QString::number(sum);
    otch = otch + "Итого" + " : " + SSum + " рублей";

    QString str = QFileDialog::getSaveFileName(0, m_strFileName);
    if(!str.isEmpty())
    {
        m_strFileName = str;
        QFile file(m_strFileName);
        if(file.open(QIODevice::WriteOnly))
        {
            QTextStream(&file)<<otch;
            file.close();
        }
    }
}

/////////////////////////////////////////
/// Добавление/изменение товаров
///
void kiselev_lang::slotAdd()
{
    this->close();
}

void kiselev_lang::slotChange()
{
    this->close();
}

/////////////////////////////////////////
/// Выбор данных для таблицы
///
void kiselev_lang::slotSelect(int flag)
{
    if(flag==NULL) iselect->close();
//////////////////////////////////////////////////////////////////////////////////////////////////////
    else if(flag==1)
    {
        QFont font = ui->tableView->font();
        font.setPixelSize(19);
        ui->tableView->setFont(font);
        ui->label->setText("Каталог товаров");

        QSqlQuery query;
        query.exec("SELECT Code, Type, Name, Sex, Size, Val, Photo FROM Katalog");

        QStandardItemModel *model = new QStandardItemModel;
        QStandardItem *item;

        QStringList horizontalHeader;
        horizontalHeader.append("Код товара");
        horizontalHeader.append("Тип одежды");
        horizontalHeader.append("Торговое наименование");
        horizontalHeader.append("М/Ж");
        horizontalHeader.append("Размер");
        horizontalHeader.append("Цена");
        horizontalHeader.append("Фото");

        model->setHorizontalHeaderLabels(horizontalHeader);
        ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
        ui->tableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);

        QStringList verticalHeader;
        while (query.next())
        {
            QString Code = query.value(0).toString();
            QString Type = query.value(1).toString();
            QString Name = query.value(2).toString();
            QString Sex = query.value(3).toString();
            QString Size = query.value(4).toString();
            QString Val = query.value(5).toString();
            QString Photo = query.value(6).toString();
            int ID_int = query.value(0).toInt();
            //Заголовки строк
            verticalHeader.append(Code);

            //Ряды
            item = new QStandardItem(Code);
            item->setTextAlignment(Qt::AlignCenter);
            model->setItem(ID_int-1, 0, item);

            item = new QStandardItem(Type);
            item->setTextAlignment(Qt::AlignCenter);
            model->setItem(ID_int-1, 1, item);

            item = new QStandardItem(Name);
            item->setTextAlignment(Qt::AlignCenter);
            model->setItem(ID_int-1, 2, item);

            item = new QStandardItem(Sex);
            item->setTextAlignment(Qt::AlignCenter);
            model->setItem(ID_int-1, 3, item);

            item = new QStandardItem(Size);
            item->setTextAlignment(Qt::AlignCenter);
            model->setItem(ID_int-1, 4, item);

            item = new QStandardItem(Val);
            item->setTextAlignment(Qt::AlignCenter);
            model->setItem(ID_int-1, 5, item);

            QImage image(Photo);
            item = new QStandardItem();
            item->setData(QVariant(QPixmap::fromImage(image)), Qt::DecorationRole);
            model->setItem(ID_int-1, 6, item);

        }
        ui->tableView->setModel(model);
        ui->tableView->resizeRowsToContents();
        ui->tableView->resizeColumnsToContents();
    }
//////////////////////////////////////////////////////////////////////////////////////////////////////
    else if(flag==2)
    {
        QFont font = ui->tableView->font();
        font.setPixelSize(16);
        ui->tableView->setFont(font);
        ui->label->setText("Отчёт со склада");

        QSqlQuery query;
        query.exec("SELECT Code, Type, Name, Maker, Provider, OnStock, Sale FROM Otchet");

        QStandardItemModel *model = new QStandardItemModel;
        QStandardItem *item;

        QStringList horizontalHeader;
        horizontalHeader.append("Код товара");
        horizontalHeader.append("Тип одежды");
        horizontalHeader.append("Торговое наименование");
        horizontalHeader.append("Производитель");
        horizontalHeader.append("Поставщик");
        horizontalHeader.append("В наличии");
        horizontalHeader.append("Продано");

        model->setHorizontalHeaderLabels(horizontalHeader);
        ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
        ui->tableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);

        QStringList verticalHeader;
        while (query.next())
        {
            QString Code = query.value(0).toString();
            QString Type = query.value(1).toString();
            QString Name = query.value(2).toString();
            QString Maker = query.value(3).toString();
            QString Provider = query.value(4).toString();
            QString OnStock = query.value(5).toString();
            QString Sale = query.value(6).toString();
            int ID_int = query.value(0).toInt();
            //Заголовки строк
            verticalHeader.append(Code);

            //Ряды
            item = new QStandardItem(Code);
            item->setTextAlignment(Qt::AlignCenter);
            model->setItem(ID_int-1, 0, item);

            item = new QStandardItem(Type);
            item->setTextAlignment(Qt::AlignCenter);
            model->setItem(ID_int-1, 1, item);

            item = new QStandardItem(Name);
            item->setTextAlignment(Qt::AlignCenter);
            model->setItem(ID_int-1, 2, item);

            item = new QStandardItem(Maker);
            item->setTextAlignment(Qt::AlignCenter);
            model->setItem(ID_int-1, 3, item);

            item = new QStandardItem(Provider);
            item->setTextAlignment(Qt::AlignCenter);
            model->setItem(ID_int-1, 4, item);

            item = new QStandardItem(OnStock);
            item->setTextAlignment(Qt::AlignCenter);
            model->setItem(ID_int-1, 5, item);

            item = new QStandardItem(Sale);
            item->setTextAlignment(Qt::AlignCenter);
            model->setItem(ID_int-1, 6, item);

        }
        ui->tableView->setModel(model);
        ui->tableView->resizeRowsToContents();
        ui->tableView->resizeColumnsToContents();
    }
//////////////////////////////////////////////////////////////////////////////////////////////////////
    else if(flag==3)
    {
        QFont font = ui->tableView->font();
        font.setPixelSize(22);
        ui->tableView->setFont(font);
        ui->label->setText("Каталог товаров");

        QSqlQuery query;
        query.exec("SELECT Code, Type, Name, Sex, Size, Val, Photo FROM Katalog");

        QStandardItemModel *model = new QStandardItemModel;
        QStandardItem *item;

        QStringList horizontalHeader;
        horizontalHeader.append("Код товара");
        horizontalHeader.append("Тип одежды");
        horizontalHeader.append("Торговое наименование");
        horizontalHeader.append("М/Ж");
        horizontalHeader.append("Размер");
        horizontalHeader.append("Цена");
        horizontalHeader.append("Фото");

        model->setHorizontalHeaderLabels(horizontalHeader);
        ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
        ui->tableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);

        int n=1;
        QStringList verticalHeader;
        while (query.next())
        {
            QString Code = query.value(0).toString();
            QString Type = query.value(1).toString();
            QString Name = query.value(2).toString();
            QString Sex = query.value(3).toString();
            QString Size = query.value(4).toString();
            QString Val = query.value(5).toString();
            QString Photo = query.value(6).toString();
            int ID_int = n;


            if(Type=="Галстук")
            {
                n++;
                //Заголовки строк
                verticalHeader.append(Code);

                //Ряды
                item = new QStandardItem(Code);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 0, item);

                item = new QStandardItem(Type);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 1, item);

                item = new QStandardItem(Name);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 2, item);

                item = new QStandardItem(Sex);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 3, item);

                item = new QStandardItem(Size);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 4, item);

                item = new QStandardItem(Val);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 5, item);

                QImage image(Photo);
                item = new QStandardItem();
                item->setData(QVariant(QPixmap::fromImage(image)), Qt::DecorationRole);
                model->setItem(ID_int-1, 6, item);
            }

        }
        ui->tableView->setModel(model);
        ui->tableView->resizeRowsToContents();
        ui->tableView->resizeColumnsToContents();
    }
//////////////////////////////////////////////////////////////////////////////////////////////////////
    else if(flag==4)
    {
        QFont font = ui->tableView->font();
        font.setPixelSize(22);
        ui->tableView->setFont(font);
        ui->label->setText("Каталог товаров");

        QSqlQuery query;
        query.exec("SELECT Code, Type, Name, Sex, Size, Val, Photo FROM Katalog");

        QStandardItemModel *model = new QStandardItemModel;
        QStandardItem *item;

        QStringList horizontalHeader;
        horizontalHeader.append("Код товара");
        horizontalHeader.append("Тип одежды");
        horizontalHeader.append("Торговое наименование");
        horizontalHeader.append("М/Ж");
        horizontalHeader.append("Размер");
        horizontalHeader.append("Цена");
        horizontalHeader.append("Фото");

        model->setHorizontalHeaderLabels(horizontalHeader);
        ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
        ui->tableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);

        int n=1;
        QStringList verticalHeader;
        while (query.next())
        {
            QString Code = query.value(0).toString();
            QString Type = query.value(1).toString();
            QString Name = query.value(2).toString();
            QString Sex = query.value(3).toString();
            QString Size = query.value(4).toString();
            QString Val = query.value(5).toString();
            QString Photo = query.value(6).toString();
            int ID_int = n;


            if(Type=="Джинсы")
            {
                n++;
                //Заголовки строк
                verticalHeader.append(Code);

                //Ряды
                item = new QStandardItem(Code);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 0, item);

                item = new QStandardItem(Type);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 1, item);

                item = new QStandardItem(Name);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 2, item);

                item = new QStandardItem(Sex);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 3, item);

                item = new QStandardItem(Size);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 4, item);

                item = new QStandardItem(Val);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 5, item);

                QImage image(Photo);
                item = new QStandardItem();
                item->setData(QVariant(QPixmap::fromImage(image)), Qt::DecorationRole);
                model->setItem(ID_int-1, 6, item);
            }

        }
        ui->tableView->setModel(model);
        ui->tableView->resizeRowsToContents();
        ui->tableView->resizeColumnsToContents();
    }
//////////////////////////////////////////////////////////////////////////////////////////////////////
    else if(flag==5)
    {
        QFont font = ui->tableView->font();
        font.setPixelSize(19);
        ui->tableView->setFont(font);
        ui->label->setText("Каталог товаров");

        QSqlQuery query;
        query.exec("SELECT Code, Type, Name, Sex, Size, Val, Photo FROM Katalog");

        QStandardItemModel *model = new QStandardItemModel;
        QStandardItem *item;

        QStringList horizontalHeader;
        horizontalHeader.append("Код товара");
        horizontalHeader.append("Тип одежды");
        horizontalHeader.append("Торговое наименование");
        horizontalHeader.append("М/Ж");
        horizontalHeader.append("Размер");
        horizontalHeader.append("Цена");
        horizontalHeader.append("Фото");

        model->setHorizontalHeaderLabels(horizontalHeader);
        ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
        ui->tableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);

        int n=1;
        QStringList verticalHeader;
        while (query.next())
        {
            QString Code = query.value(0).toString();
            QString Type = query.value(1).toString();
            QString Name = query.value(2).toString();
            QString Sex = query.value(3).toString();
            QString Size = query.value(4).toString();
            QString Val = query.value(5).toString();
            QString Photo = query.value(6).toString();
            int ID_int = n;


            if(Type=="Носки")
            {
                n++;
                //Заголовки строк
                verticalHeader.append(Code);

                //Ряды
                item = new QStandardItem(Code);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 0, item);

                item = new QStandardItem(Type);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 1, item);

                item = new QStandardItem(Name);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 2, item);

                item = new QStandardItem(Sex);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 3, item);

                item = new QStandardItem(Size);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 4, item);

                item = new QStandardItem(Val);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 5, item);

                QImage image(Photo);
                item = new QStandardItem();
                item->setData(QVariant(QPixmap::fromImage(image)), Qt::DecorationRole);
                model->setItem(ID_int-1, 6, item);
            }

        }
        ui->tableView->setModel(model);
        ui->tableView->resizeRowsToContents();
        ui->tableView->resizeColumnsToContents();
    }
//////////////////////////////////////////////////////////////////////////////////////////////////////
    else if(flag==6)
    {
        QFont font = ui->tableView->font();
        font.setPixelSize(22);
        ui->tableView->setFont(font);
        ui->label->setText("Каталог товаров");

        QSqlQuery query;
        query.exec("SELECT Code, Type, Name, Sex, Size, Val, Photo FROM Katalog");

        QStandardItemModel *model = new QStandardItemModel;
        QStandardItem *item;

        QStringList horizontalHeader;
        horizontalHeader.append("Код товара");
        horizontalHeader.append("Тип одежды");
        horizontalHeader.append("Торговое наименование");
        horizontalHeader.append("М/Ж");
        horizontalHeader.append("Размер");
        horizontalHeader.append("Цена");
        horizontalHeader.append("Фото");

        model->setHorizontalHeaderLabels(horizontalHeader);
        ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
        ui->tableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);

        int n=1;
        QStringList verticalHeader;
        while (query.next())
        {
            QString Code = query.value(0).toString();
            QString Type = query.value(1).toString();
            QString Name = query.value(2).toString();
            QString Sex = query.value(3).toString();
            QString Size = query.value(4).toString();
            QString Val = query.value(5).toString();
            QString Photo = query.value(6).toString();
            int ID_int = n;


            if(Type=="Рубашка")
            {
                n++;
                //Заголовки строк
                verticalHeader.append(Code);

                //Ряды
                item = new QStandardItem(Code);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 0, item);

                item = new QStandardItem(Type);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 1, item);

                item = new QStandardItem(Name);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 2, item);

                item = new QStandardItem(Sex);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 3, item);

                item = new QStandardItem(Size);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 4, item);

                item = new QStandardItem(Val);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 5, item);

                QImage image(Photo);
                item = new QStandardItem();
                item->setData(QVariant(QPixmap::fromImage(image)), Qt::DecorationRole);
                model->setItem(ID_int-1, 6, item);
            }

        }
        ui->tableView->setModel(model);
        ui->tableView->resizeRowsToContents();
        ui->tableView->resizeColumnsToContents();
    }
//////////////////////////////////////////////////////////////////////////////////////////////////////
    else if(flag==7)
    {
        QFont font = ui->tableView->font();
        font.setPixelSize(22);
        ui->tableView->setFont(font);
        ui->label->setText("Каталог товаров");

        QSqlQuery query;
        query.exec("SELECT Code, Type, Name, Sex, Size, Val, Photo FROM Katalog");

        QStandardItemModel *model = new QStandardItemModel;
        QStandardItem *item;

        QStringList horizontalHeader;
        horizontalHeader.append("Код товара");
        horizontalHeader.append("Тип одежды");
        horizontalHeader.append("Торговое наименование");
        horizontalHeader.append("М/Ж");
        horizontalHeader.append("Размер");
        horizontalHeader.append("Цена");
        horizontalHeader.append("Фото");

        model->setHorizontalHeaderLabels(horizontalHeader);
        ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
        ui->tableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);

        int n=1;
        QStringList verticalHeader;
        while (query.next())
        {
            QString Code = query.value(0).toString();
            QString Type = query.value(1).toString();
            QString Name = query.value(2).toString();
            QString Sex = query.value(3).toString();
            QString Size = query.value(4).toString();
            QString Val = query.value(5).toString();
            QString Photo = query.value(6).toString();
            int ID_int = n;


            if(Type=="Спортивное")
            {
                n++;
                //Заголовки строк
                verticalHeader.append(Code);

                //Ряды
                item = new QStandardItem(Code);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 0, item);

                item = new QStandardItem(Type);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 1, item);

                item = new QStandardItem(Name);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 2, item);

                item = new QStandardItem(Sex);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 3, item);

                item = new QStandardItem(Size);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 4, item);

                item = new QStandardItem(Val);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 5, item);

                QImage image(Photo);
                item = new QStandardItem();
                item->setData(QVariant(QPixmap::fromImage(image)), Qt::DecorationRole);
                model->setItem(ID_int-1, 6, item);
            }

        }
        ui->tableView->setModel(model);
        ui->tableView->resizeRowsToContents();
        ui->tableView->resizeColumnsToContents();
    }
//////////////////////////////////////////////////////////////////////////////////////////////////////
    else if(flag==8)
    {
        QFont font = ui->tableView->font();
        font.setPixelSize(22);
        ui->tableView->setFont(font);
        ui->label->setText("Каталог товаров");

        QSqlQuery query;
        query.exec("SELECT Code, Type, Name, Sex, Size, Val, Photo FROM Katalog");

        QStandardItemModel *model = new QStandardItemModel;
        QStandardItem *item;

        QStringList horizontalHeader;
        horizontalHeader.append("Код товара");
        horizontalHeader.append("Тип одежды");
        horizontalHeader.append("Торговое наименование");
        horizontalHeader.append("М/Ж");
        horizontalHeader.append("Размер");
        horizontalHeader.append("Цена");
        horizontalHeader.append("Фото");

        model->setHorizontalHeaderLabels(horizontalHeader);
        ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
        ui->tableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);

        int n=1;
        QStringList verticalHeader;
        while (query.next())
        {
            QString Code = query.value(0).toString();
            QString Type = query.value(1).toString();
            QString Name = query.value(2).toString();
            QString Sex = query.value(3).toString();
            QString Size = query.value(4).toString();
            QString Val = query.value(5).toString();
            QString Photo = query.value(6).toString();
            int ID_int = n;


            if(Type=="Футболка")
            {
                n++;
                //Заголовки строк
                verticalHeader.append(Code);

                //Ряды
                item = new QStandardItem(Code);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 0, item);

                item = new QStandardItem(Type);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 1, item);

                item = new QStandardItem(Name);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 2, item);

                item = new QStandardItem(Sex);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 3, item);

                item = new QStandardItem(Size);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 4, item);

                item = new QStandardItem(Val);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 5, item);

                QImage image(Photo);
                item = new QStandardItem();
                item->setData(QVariant(QPixmap::fromImage(image)), Qt::DecorationRole);
                model->setItem(ID_int-1, 6, item);
            }

        }
        ui->tableView->setModel(model);
        ui->tableView->resizeRowsToContents();
        ui->tableView->resizeColumnsToContents();
    }
//////////////////////////////////////////////////////////////////////////////////////////////////////
    else if(flag==9)
    {
        QFont font = ui->tableView->font();
        font.setPixelSize(22);
        ui->tableView->setFont(font);
        ui->label->setText("Каталог товаров");

        QSqlQuery query;
        query.exec("SELECT Code, Type, Name, Sex, Size, Val, Photo FROM Katalog");

        QStandardItemModel *model = new QStandardItemModel;
        QStandardItem *item;

        QStringList horizontalHeader;
        horizontalHeader.append("Код товара");
        horizontalHeader.append("Тип одежды");
        horizontalHeader.append("Торговое наименование");
        horizontalHeader.append("М/Ж");
        horizontalHeader.append("Размер");
        horizontalHeader.append("Цена");
        horizontalHeader.append("Фото");

        model->setHorizontalHeaderLabels(horizontalHeader);
        ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
        ui->tableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);

        int n=1;
        QStringList verticalHeader;
        while (query.next())
        {
            QString Code = query.value(0).toString();
            QString Type = query.value(1).toString();
            QString Name = query.value(2).toString();
            QString Sex = query.value(3).toString();
            QString Size = query.value(4).toString();
            QString Val = query.value(5).toString();
            QString Photo = query.value(6).toString();
            int ID_int = n;


            if(Type=="Юбка")
            {
                n++;
                //Заголовки строк
                verticalHeader.append(Code);

                //Ряды
                item = new QStandardItem(Code);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 0, item);

                item = new QStandardItem(Type);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 1, item);

                item = new QStandardItem(Name);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 2, item);

                item = new QStandardItem(Sex);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 3, item);

                item = new QStandardItem(Size);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 4, item);

                item = new QStandardItem(Val);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 5, item);

                QImage image(Photo);
                item = new QStandardItem();
                item->setData(QVariant(QPixmap::fromImage(image)), Qt::DecorationRole);
                model->setItem(ID_int-1, 6, item);
            }

        }
        ui->tableView->setModel(model);
        ui->tableView->resizeRowsToContents();
        ui->tableView->resizeColumnsToContents();
    }
//////////////////////////////////////////////////////////////////////////////////////////////////////
    else if(flag==10)
    {
        QFont font = ui->tableView->font();
        font.setPixelSize(22);
        ui->tableView->setFont(font);
        ui->label->setText("Каталог товаров");

        QSqlQuery query;
        query.exec("SELECT Code, Type, Name, Sex, Size, Val, Photo FROM Katalog");

        QSqlQuery query0;
        query0.exec("SELECT Maker, Provider FROM Otchet");

        QStandardItemModel *model = new QStandardItemModel;
        QStandardItem *item;

        QStringList horizontalHeader;
        horizontalHeader.append("Код товара");
        horizontalHeader.append("Тип одежды");
        horizontalHeader.append("Торговое наименование");
        horizontalHeader.append("М/Ж");
        horizontalHeader.append("Размер");
        horizontalHeader.append("Цена");
        horizontalHeader.append("Фото");

        model->setHorizontalHeaderLabels(horizontalHeader);
        ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
        ui->tableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);
        int n=1;
        QString info = "";
        QStringList verticalHeader;
        while ((query.next())&&(query0.next()))
        {
            QString Code = query.value(0).toString();
            QString Type = query.value(1).toString();
            QString Name = query.value(2).toString();
            QString Sex = query.value(3).toString();
            QString Size = query.value(4).toString();
            QString Val = query.value(5).toString();
            QString Photo = query.value(6).toString();
            int ID_int = n;

            QString Maker = query0.value(0).toString();
            QString Provider = query0.value(1).toString();
            if(Maker==Provider)
            {
                n++;
                if(info == "") info = Maker;
                //Заголовки строк
                verticalHeader.append(Code);

                //Ряды
                item = new QStandardItem(Code);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 0, item);

                item = new QStandardItem(Type);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 1, item);

                item = new QStandardItem(Name);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 2, item);

                item = new QStandardItem(Sex);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 3, item);

                item = new QStandardItem(Size);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 4, item);

                item = new QStandardItem(Val);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 5, item);

                QImage image(Photo);
                item = new QStandardItem();
                item->setData(QVariant(QPixmap::fromImage(image)), Qt::DecorationRole);
                model->setItem(ID_int-1, 6, item);
            }
        }
        ui->tableView->setModel(model);
        ui->tableView->resizeRowsToContents();
        ui->tableView->resizeColumnsToContents();
        QString iinfo = "Ваш поставщик и производитель: " + info;
        QMessageBox::information(0,"Информация",iinfo);
    }
//////////////////////////////////////////////////////////////////////////////////////////////////////
    else if(flag==11)
    {
        QFont font = ui->tableView->font();
        font.setPixelSize(21);
        ui->tableView->setFont(font);
        ui->label->setText("Каталог товаров");

        QSqlQuery query;
        query.exec("SELECT Code, Type, Name, Sex, Size, Val, Photo FROM Katalog");

        QStandardItemModel *model = new QStandardItemModel;
        QStandardItem *item;

        QStringList horizontalHeader;
        horizontalHeader.append("Код товара");
        horizontalHeader.append("Тип одежды");
        horizontalHeader.append("Торговое наименование");
        horizontalHeader.append("М/Ж");
        horizontalHeader.append("Размер");
        horizontalHeader.append("Цена");
        horizontalHeader.append("Фото");

        model->setHorizontalHeaderLabels(horizontalHeader);
        ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
        ui->tableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);

        int n=1;
        QStringList verticalHeader;
        while (query.next())
        {
            QString Code = query.value(0).toString();
            QString Type = query.value(1).toString();
            QString Name = query.value(2).toString();
            QString Sex = query.value(3).toString();
            QString Size = query.value(4).toString();
            QString Val = query.value(5).toString();
            QString Photo = query.value(6).toString();
            int ID_int = n;

            if(Sex=="М")
            {
                n++;
                //Заголовки строк
                verticalHeader.append(Code);

                //Ряды
                item = new QStandardItem(Code);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 0, item);

                item = new QStandardItem(Type);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 1, item);

                item = new QStandardItem(Name);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 2, item);

                item = new QStandardItem(Sex);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 3, item);

                item = new QStandardItem(Size);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 4, item);

                item = new QStandardItem(Val);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 5, item);

                QImage image(Photo);
                item = new QStandardItem();
                item->setData(QVariant(QPixmap::fromImage(image)), Qt::DecorationRole);
                model->setItem(ID_int-1, 6, item);
            }

        }
        ui->tableView->setModel(model);
        ui->tableView->resizeRowsToContents();
        ui->tableView->resizeColumnsToContents();
    }
//////////////////////////////////////////////////////////////////////////////////////////////////////
    else if(flag==12)
    {
        QFont font = ui->tableView->font();
        font.setPixelSize(19);
        ui->tableView->setFont(font);
        ui->label->setText("Каталог товаров");

        QSqlQuery query;
        query.exec("SELECT Code, Type, Name, Sex, Size, Val, Photo FROM Katalog");

        QStandardItemModel *model = new QStandardItemModel;
        QStandardItem *item;

        QStringList horizontalHeader;
        horizontalHeader.append("Код товара");
        horizontalHeader.append("Тип одежды");
        horizontalHeader.append("Торговое наименование");
        horizontalHeader.append("М/Ж");
        horizontalHeader.append("Размер");
        horizontalHeader.append("Цена");
        horizontalHeader.append("Фото");

        model->setHorizontalHeaderLabels(horizontalHeader);
        ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
        ui->tableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);

        int n=1;
        QStringList verticalHeader;
        while (query.next())
        {
            QString Code = query.value(0).toString();
            QString Type = query.value(1).toString();
            QString Name = query.value(2).toString();
            QString Sex = query.value(3).toString();
            QString Size = query.value(4).toString();
            QString Val = query.value(5).toString();
            QString Photo = query.value(6).toString();
            int ID_int = n;

            if(Sex=="Ж")
            {
                n++;
                //Заголовки строк
                verticalHeader.append(Code);

                //Ряды
                item = new QStandardItem(Code);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 0, item);

                item = new QStandardItem(Type);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 1, item);

                item = new QStandardItem(Name);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 2, item);

                item = new QStandardItem(Sex);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 3, item);

                item = new QStandardItem(Size);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 4, item);

                item = new QStandardItem(Val);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 5, item);

                QImage image(Photo);
                item = new QStandardItem();
                item->setData(QVariant(QPixmap::fromImage(image)), Qt::DecorationRole);
                model->setItem(ID_int-1, 6, item);
            }

        }
        ui->tableView->setModel(model);
        ui->tableView->resizeRowsToContents();
        ui->tableView->resizeColumnsToContents();
    }
//////////////////////////////////////////////////////////////////////////////////////////////////////
    else if(flag==13)
    {
        QFont font = ui->tableView->font();
        font.setPixelSize(19);
        ui->tableView->setFont(font);
        ui->label->setText("Каталог товаров");

        QSqlQuery query;
        query.exec("SELECT Code, Type, Name, Sex, Size, Val, Photo FROM Katalog");

        QStandardItemModel *model = new QStandardItemModel;
        QStandardItem *item;

        QStringList horizontalHeader;
        horizontalHeader.append("Код товара");
        horizontalHeader.append("Тип одежды");
        horizontalHeader.append("Торговое наименование");
        horizontalHeader.append("М/Ж");
        horizontalHeader.append("Размер");
        horizontalHeader.append("Цена");
        horizontalHeader.append("Фото");

        model->setHorizontalHeaderLabels(horizontalHeader);
        ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
        ui->tableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);

        int n=1;
        QStringList verticalHeader;
        while (query.next())
        {
            QString Code = query.value(0).toString();
            QString Type = query.value(1).toString();
            QString Name = query.value(2).toString();
            QString Sex = query.value(3).toString();
            QString Size = query.value(4).toString();
            int SS = query.value(4).toInt();
            QString Val = query.value(5).toString();
            QString Photo = query.value(6).toString();
            int ID_int = n;

            if(SS<=35)
            {
                n++;
                //Заголовки строк
                verticalHeader.append(Code);

                //Ряды
                item = new QStandardItem(Code);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 0, item);

                item = new QStandardItem(Type);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 1, item);

                item = new QStandardItem(Name);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 2, item);

                item = new QStandardItem(Sex);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 3, item);

                item = new QStandardItem(Size);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 4, item);

                item = new QStandardItem(Val);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 5, item);

                QImage image(Photo);
                item = new QStandardItem();
                item->setData(QVariant(QPixmap::fromImage(image)), Qt::DecorationRole);
                model->setItem(ID_int-1, 6, item);
            }

        }
        ui->tableView->setModel(model);
        ui->tableView->resizeRowsToContents();
        ui->tableView->resizeColumnsToContents();
    }
//////////////////////////////////////////////////////////////////////////////////////////////////////
    else if(flag==14)
    {
        QFont font = ui->tableView->font();
        font.setPixelSize(21);
        ui->tableView->setFont(font);
        ui->label->setText("Каталог товаров");

        QSqlQuery query;
        query.exec("SELECT Code, Type, Name, Sex, Size, Val, Photo FROM Katalog");

        QStandardItemModel *model = new QStandardItemModel;
        QStandardItem *item;

        QStringList horizontalHeader;
        horizontalHeader.append("Код товара");
        horizontalHeader.append("Тип одежды");
        horizontalHeader.append("Торговое наименование");
        horizontalHeader.append("М/Ж");
        horizontalHeader.append("Размер");
        horizontalHeader.append("Цена");
        horizontalHeader.append("Фото");

        model->setHorizontalHeaderLabels(horizontalHeader);
        ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
        ui->tableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);

        int n=1;
        QStringList verticalHeader;
        while (query.next())
        {
            QString Code = query.value(0).toString();
            QString Type = query.value(1).toString();
            QString Name = query.value(2).toString();
            QString Sex = query.value(3).toString();
            QString Size = query.value(4).toString();
            int SS = query.value(4).toInt();
            QString Val = query.value(5).toString();
            QString Photo = query.value(6).toString();
            int ID_int = n;

            if(SS>35)
            {
                n++;
                //Заголовки строк
                verticalHeader.append(Code);

                //Ряды
                item = new QStandardItem(Code);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 0, item);

                item = new QStandardItem(Type);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 1, item);

                item = new QStandardItem(Name);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 2, item);

                item = new QStandardItem(Sex);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 3, item);

                item = new QStandardItem(Size);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 4, item);

                item = new QStandardItem(Val);
                item->setTextAlignment(Qt::AlignCenter);
                model->setItem(ID_int-1, 5, item);

                QImage image(Photo);
                item = new QStandardItem();
                item->setData(QVariant(QPixmap::fromImage(image)), Qt::DecorationRole);
                model->setItem(ID_int-1, 6, item);
            }

        }
        ui->tableView->setModel(model);
        ui->tableView->resizeRowsToContents();
        ui->tableView->resizeColumnsToContents();
    }

}
