#include "addserviceform.h"
#include "ui_addserviceform.h"

AddServiceForm::AddServiceForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddServiceForm)
{
    ui->setupUi(this);
    Constants::DBInit(db);
}

AddServiceForm::~AddServiceForm()
{
    delete ui;
}
void AddServiceForm::closeEvent(QCloseEvent *event)
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
void AddServiceForm::on_addButton_clicked()
{
    try
    {
        db.open();
        QSqlQuery query;
        query.prepare("INSERT INTO Service (Name, Price) "
                      "VALUES (:Name,:Price)");
        query.bindValue(":Name", ui->textName->text());
        query.bindValue(":Price",ui->textPrice->text());
        query.exec();
        db.close();
        QMessageBox::information(this,"Стоматологическая клиника","Услуга успешно добавлена");
    }
    catch (QException ex)
    {
        QMessageBox::warning(this,"Стоматологическая клиника",ex.what());
    }
}
