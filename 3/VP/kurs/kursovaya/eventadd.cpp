#include "eventadd.h"
#include "ui_eventadd.h"

eventAdd::eventAdd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::eventAdd)
{
    ui->setupUi(this);
    QFont font(QString("Times New Roman"), 9);
    ui->label->setFont(font);
    ui->label_2->setFont(font);
    ui->label_3->setFont(font);
    ui->label_4->setFont(font);
    ui->label_5->setFont(font);
    ui->dateEdit->setFont(font);
    ui->dateEdit->setDate(QDate::currentDate());
    ui->timeEdit->setFont(font);
    ui->timeEdit_2->setFont(font);
    ui->comboBox->setFont(font);
    setStyleSheet(                    "QPushButton { background-color: (25,25,100);"
                                      "padding:4px;color:(25,25,25);font-size: 14px;"
                                      "border-radius: 4px;border: 1px solid #3873d9;"
                                      "}");
}

eventAdd::~eventAdd()
{
    delete ui;
}

void eventAdd::closeEvent(QCloseEvent *event)
{
    /*QMessageBox::StandardButton resBtn = QMessageBox::question( this, "Ежедневник",
                                                                tr("Вы уверены?\n"),
                                                                QMessageBox::No |QMessageBox::Yes,
                                                                QMessageBox::Yes);
    if (resBtn != QMessageBox::Yes)
    {
        event->ignore();
    }
    else
    {
        emit doIt();
        event->accept();
    }*/
}

void eventAdd::add()
{
    QMessageBox::StandardButton resBtn = QMessageBox::question( this, "Ежедневник",
                                                                tr("Вы уверены?\n"),
                                                                QMessageBox::No |QMessageBox::Yes,
                                                                QMessageBox::Yes);
    if (resBtn != QMessageBox::Yes)
    {
        //event->ignore();
    }
    else
    {
        QSqlQuery query;
        query.prepare("INSERT INTO " TABLE " ( " TABLE_DATE ", "
                                                 TABLE_BEGIN_TIME ", "
                                                 TABLE_END_TIME ", "
                                                 TABLE_EVENT ", "
                                                 TABLE_STATUS " ) "
                      "VALUES (:Date, :BeginTime, :EndTime, :Event, :Status )");
        query.bindValue(":Date",              ui->dateEdit->date());
        query.bindValue(":BeginTime",         ui->timeEdit->time());
        query.bindValue(":EndTime",           ui->timeEdit_2->time());
        query.bindValue(":Event",             ui->lineEdit->text());
        query.bindValue(":Status",            ui->comboBox->currentText());
        query.exec();
        emit doIt();
        QMessageBox::information(this,"Ежедневник","Событие успешно добавлено");
    }
}

void eventAdd::on_pushButton_clicked()
{
    this->add();
}
