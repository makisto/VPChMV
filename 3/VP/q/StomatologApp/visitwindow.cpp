#include "visitwindow.h"
#include "ui_visitwindow.h"
#include <QAxObject>
#include <QFileDialog>

VisitWindow::VisitWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VisitWindow)
{
    setWindowIcon(QIcon(":/icons/t.png"));
    ui->setupUi(this);
    //this->setW
    //this->setWindowIcon(QIcon(":/icons/t.png"));
    Constants::DBInit(db);
    LoadClients();
    LoadVisits();
    LoadServices();
    SetStyles();
    ui->pushButton_4->setIcon(QIcon(QString("C:\\Users\\Dasha\\Desktop\\q\\StomatologApp\\icons\\client.png")));
    ui->clientUpdate->setIcon(QIcon(QString("C:\\Users\\Dasha\\Desktop\\q\\StomatologApp\\icons\\person.png")));
    ui->clientDelete->setIcon(QIcon(QString("C:\\Users\\Dasha\\Desktop\\q\\StomatologApp\\icons\\tooth.png")));
    ui->addVisit->setIcon(QIcon(QString("C:\\Users\\Dasha\\Desktop\\q\\StomatologApp\\icons\\client.png")));
    ui->visitUpdate->setIcon(QIcon(QString("C:\\Users\\Dasha\\Desktop\\q\\StomatologApp\\icons\\person.png")));
    ui->visitDelete->setIcon(QIcon(QString("C:\\Users\\Dasha\\Desktop\\q\\StomatologApp\\icons\\tooth.png")));
    ui->serviceAdd->setIcon(QIcon(QString("C:\\Users\\Dasha\\Desktop\\q\\StomatologApp\\icons\\client.png")));
    ui->serviceUpdate->setIcon(QIcon(QString("C:\\Users\\Dasha\\Desktop\\q\\StomatologApp\\icons\\person.png")));
    ui->serviceDelete->setIcon(QIcon(QString("C:\\Users\\Dasha\\Desktop\\q\\StomatologApp\\icons\\tooth.png")));

}
void VisitWindow::SetStyles()
{
    QFont font(QString("Times New Roman"), 15);
    QString alternativeColor("alternate-background-color:#40FAD0;background-color: white;");
    QString headerColor("QHeaderView::section { background-color:#ADD8E6;}");
    ui->tableService->setFont(font);
    ui->tableService->horizontalHeader()->setFont(font);
    ui->tableService->setAlternatingRowColors(true);
    ui->tableService->setStyleSheet(alternativeColor);
    ui->tableService->setStyleSheet(headerColor);
    //--------------------------------------------
    ui->tableClient->setFont(font);
    ui->tableClient->horizontalHeader()->setFont(font);
    ui->tableClient->setAlternatingRowColors(true);
    ui->tableClient->setStyleSheet(alternativeColor);
    ui->tableClient->setStyleSheet(headerColor);
    //--------------------------------------------
    ui->tableVisit->setFont(font);
    ui->tableVisit->horizontalHeader()->setFont(font);
    ui->tableVisit->setAlternatingRowColors(true);
    ui->tableVisit->setStyleSheet(alternativeColor);
    ui->tableVisit->setStyleSheet(headerColor);
    setStyleSheet("background-color:#DCDCDC");


    ui->addVisit->setStyleSheet("background-color:#c0c0c0");
    ui->visitUpdate->setStyleSheet("background-color:#c0c0c0");
    ui->visitDelete->setStyleSheet("background-color:#c0c0c0");
    ui->pushButton_4->setStyleSheet("background-color:#c0c0c0");
    ui->clientUpdate->setStyleSheet("background-color:#c0c0c0");
    ui->clientDelete->setStyleSheet("background-color:#c0c0c0");
    ui->serviceAdd->setStyleSheet("background-color:#c0c0c0");
    ui->serviceUpdate->setStyleSheet("background-color:#c0c0c0");
    ui->serviceDelete->setStyleSheet("background-color:#c0c0c0");
    ui->ot->setStyleSheet("background-color:#c0c0c0");
    ui->choiceot->setStyleSheet("background-color:#c0c0c0");
    ui->Help->setStyleSheet("background-color:#c0c0c0");

}
VisitWindow::~VisitWindow()
{
    delete ui;
}
void VisitWindow::closeEvent(QCloseEvent *event)
{
    QMessageBox::StandardButton resBtn = QMessageBox::question( this, "Стоматологическая клиника",
                                                                tr("Вы уверены?\n"),
                                                                QMessageBox::No | QMessageBox::Yes,
                                                                QMessageBox::Yes);
    if (resBtn != QMessageBox::Yes) {
        event->ignore();
    } else {
        event->accept();
    }
}
void VisitWindow::LoadClients()
{
    Constants::DBInit(db);
       db.open();
       QSqlQuery query;
       query.exec("SELECT ClientId, FIO, BirthDate, Phone, Passport, Address, Email FROM Client;");
       QSqlQueryModel *model = new QSqlQueryModel();
       model->setQuery(query);
       model->setHeaderData(0, Qt::Horizontal, tr("Id"));
       model->setHeaderData(1, Qt::Horizontal, tr("ФИО"));
       model->setHeaderData(2, Qt::Horizontal, tr("Дата рождения"));
       model->setHeaderData(3, Qt::Horizontal, tr("Телефон"));
       model->setHeaderData(4, Qt::Horizontal, tr("Паспорт"));
       model->setHeaderData(5, Qt::Horizontal, tr("Адрес"));
       model->setHeaderData(6, Qt::Horizontal, tr("Почта"));
       db.close();
       ui->tableClient->setModel(model);
       ui->tableClient->resizeColumnsToContents();
}
void VisitWindow::LoadVisits()
{
    Constants::DBInit(db);
       db.open();
       QSqlQuery query;
       query.exec("SELECT VisitId, Client.FIO, MedCard, Sum ,Status , Passport, DateVisit,DoctorFIO, DoctorPosition"
                  " FROM Visit INNER JOIN Client ON Visit.ClientId = Client.ClientId");
       QSqlQueryModel *model = new QSqlQueryModel();
       model->setQuery(query);
       model->setHeaderData(0, Qt::Horizontal, tr("Id"));
       model->setHeaderData(1, Qt::Horizontal, tr("Пациент"));
       model->setHeaderData(2, Qt::Horizontal, tr("Номер карты"));
       model->setHeaderData(3, Qt::Horizontal, tr("Сумма"));
       model->setHeaderData(4, Qt::Horizontal, tr("Статус"));
       model->setHeaderData(5, Qt::Horizontal, tr("Паспорт"));
       model->setHeaderData(6, Qt::Horizontal, tr("Дата визита"));
       model->setHeaderData(7, Qt::Horizontal, tr("Врач"));
       model->setHeaderData(8, Qt::Horizontal, tr("Должность врача"));
       db.close();
       ui->tableVisit->setModel(model);
       ui->tableVisit->resizeColumnsToContents();
}
void VisitWindow::LoadServices()
{
    Constants::DBInit(db);
       db.open();
       QSqlQuery query;
       query.exec("SELECT ServiceId, Name, Price FROM Service");
       QSqlQueryModel *model = new QSqlQueryModel();
       model->setQuery(query);
       model->setHeaderData(0, Qt::Horizontal, tr("Id"));
       model->setHeaderData(1, Qt::Horizontal, tr("Название услуги"));
       model->setHeaderData(2, Qt::Horizontal, tr("Стоимость"));
       db.close();
       ui->tableService->setModel(model);
       ui->tableService->resizeColumnsToContents();
}

void VisitWindow::on_addVisit_clicked()
{
    AddVisit *a = new AddVisit(this);
    a->show();
}

void VisitWindow::on_pushButton_4_clicked()
{
    AddClientWindow *a = new AddClientWindow(this);
    a->show();
}

void VisitWindow::on_Help_clicked()
{
    FormInfo *info1 = new FormInfo(nullptr);
    info1->show();
}

void VisitWindow::on_ot_clicked()
{
    QAxObject* pword = new QAxObject("Word.Application");
    QAxObject* pdoc = pword->querySubObject("Documents");
    pdoc = pdoc->querySubObject("Add()");

    //QAxObject* prange = pdoc->querySubObject("Range()");

    pword->setProperty("Visible",true);
}

void VisitWindow::on_choiceot_clicked()
{
    QString path = QFileDialog::getOpenFileName(nullptr, "Load card", QDir::currentPath());
    QAxObject* pword = new QAxObject("Word.Application");
    QAxObject* pdoc = pword->querySubObject("Documents");
    pdoc = pdoc->querySubObject("Open(const QString&)", path);

    //QAxObject* prange = pdoc->querySubObject("Range()");

    pword->setProperty("Visible",true);
}

void VisitWindow::on_visitUpdate_clicked()
{
    LoadVisits();
}

void VisitWindow::on_clientUpdate_clicked()
{
    LoadClients();
}

void VisitWindow::on_serviceUpdate_clicked()
{
    LoadServices();
}

void VisitWindow::on_clientDelete_clicked()
{
    if( ui->tableClient->currentIndex().isValid())
    {
   try {
        QModelIndexList index = ui->tableClient->selectionModel()->selectedRows(0);
        int Id = index[0].data().toInt();
        db.open();
        QSqlQuery query;
        query.prepare("DELETE FROM Client WHERE ClientId = :Id");
        query.bindValue(":Id", Id);
        query.exec();
        db.close();
        LoadClients();
        QMessageBox::information(this,"Стоматологическая клиника","Пациент успешно удален");
    } catch (QException ex) {
        QMessageBox::warning(this,"Стоматологическая клиника",ex.what());
    }
    }
    else {
        QMessageBox::warning(this,"Стоматологическая клиника","Клиент не выбран");
     }
}

void VisitWindow::on_serviceDelete_clicked()
{
    if( ui->tableService->currentIndex().isValid())
    {
    try {
         QModelIndexList index = ui->tableService->selectionModel()->selectedRows(0);
         int Id = index[0].data().toInt();
         db.open();
         QSqlQuery query;
         query.prepare("DELETE FROM Service WHERE ServiceId = :Id");
         query.bindValue(":Id", Id);
         query.exec();
         db.close();
         LoadServices();
         QMessageBox::information(this,"Стоматологическая клиника","Услуга успешно удалена");
     } catch (QException ex) {
         QMessageBox::warning(this,"Стоматологическая клиника",ex.what());
     }
        }
        else {
            QMessageBox::warning(this,"Стоматологическая клиника","Услуга не выбрана");
         }
}
void VisitWindow::on_serviceAdd_clicked()
{
    AddServiceForm *a = new AddServiceForm (this);
    a->show();
}

void VisitWindow::on_visitDelete_clicked()
{
    if( ui->tableVisit->currentIndex().isValid())
    {
    try {
         QModelIndexList index = ui->tableVisit->selectionModel()->selectedRows(0);
         int Id = index[0].data().toInt();
         db.open();
         QSqlQuery query;
         query.prepare("DELETE FROM Visit WHERE VisitId = :Id");
         query.bindValue(":Id", Id);
         query.exec();
         db.close();
         LoadVisits();
         QMessageBox::information(this,"Стоматологическая клиника","Визит успешно удален");
     } catch (QException ex) {
         QMessageBox::warning(this,"Стоматологическая клиника",ex.what());
     }
    }
    else {
        QMessageBox::warning(this,"Стоматологическая клиника","Визит не выбран");
     }
}
