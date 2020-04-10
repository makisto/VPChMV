#include "addclientwindow.h"
#include "ui_addclientwindow.h"

AddClientWindow::AddClientWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddClientWindow)
{
    ui->setupUi(this);
    Constants::DBInit(db);
}

AddClientWindow::~AddClientWindow()
{
    delete ui;
}
void AddClientWindow::closeEvent(QCloseEvent *event)
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
void AddClientWindow::on_pushButton_clicked()
{
    try {
        db.open();
        QSqlQuery query;
        query.prepare("INSERT INTO Client (FIO,BirthDate,Phone,Passport,Address,Email) "
                      "VALUES (:FIO,:BirthDate,:Phone,:Passport,:Address,:Email)");
        query.bindValue(":FIO", ui->textFIO->text());
        query.bindValue(":BirthDate",ui->dateBirth->date() );
        query.bindValue(":Phone", ui->textPhone->text());
        query.bindValue(":Passport", ui->textPassport->text());
        query.bindValue(":Address", ui->textAddress->text());
        query.bindValue(":Email", ui->textEmail->text());
        query.exec();
        db.close();
        QMessageBox::information(this,"Стоматологическая клиника","Пациент успешно добавлен");
    } catch (QException ex) {
        QMessageBox::warning(this,"Стоматологическая клиника",ex.what());
    }
}
