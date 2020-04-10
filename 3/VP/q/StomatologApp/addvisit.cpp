#include "addvisit.h"
#include "ui_addvisitwindow.h"

AddVisit::AddVisit(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddVisit)
{
    ui->setupUi(this);
    Constants::DBInit(db);
    serviceIds = QList<int>();
    loadClients();
}
void AddVisit::loadClients()
{
    db.open();
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;
    query.exec("SELECT FIO FROM Client");
    model->setQuery(query);
    ui->comboClient->setModel(model);
    db.close();
}
AddVisit::~AddVisit()
{
    delete ui;
}
void AddVisit::closeEvent(QCloseEvent *event)
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
void AddVisit::recieveData(QList<int> services)
{
    serviceIds = services;
    QString Ids = "SELECT Sum(Price) From Service Where ServiceId IN (";
    for(int i=0; i<serviceIds.size(); i++)
    {
         Ids += QString::number(serviceIds[i]);
         if(i<serviceIds.size()-1)
            Ids += "," ;
    }
    Ids += ")";
    Constants::DBInit(db);
    db.open();
    QSqlQuery query;
    query.prepare(Ids);
    query.exec();
    query.next();
    double sum = query.value(0).toDouble();
    db.close();
    ui->textSum->setText(QString::number(sum));
}

void AddVisit::on_serviceButton_clicked()
{
    ServiceListWindow *a = new ServiceListWindow(this);
    connect(this, SIGNAL(sendList(QList<int>)), a, SLOT(recieveList(QList<int>))); // подключение сигнала к слоту нашей формы
    emit sendList(serviceIds); // вызываем сигнал, в котором передаём введённые данные
    a->show();
 }

void AddVisit::on_visitAdd_clicked()
{
    try {
        Constants::DBInit(db);
        db.open();
        QSqlQuery query;
        query.prepare("SELECT ClientId From Client Where FIO = :FIO");
        query.bindValue(":FIO",  ui->comboClient->currentText());
        query.exec();
        query.next();
        int ClientId = query.value(0).toInt();
        db.close();
        db.transaction();
        db.open();
        query.prepare("INSERT INTO Visit (ClientId, DateVisit, MedCard, DoctorFIO, DoctorPosition, Status, Sum) "
                      "VALUES (:ClientId, :DateVisit, :MedCard, :DoctorFIO, :DoctorPosition, :Status, :Sum)");
        query.bindValue(":ClientId", ClientId);
        query.bindValue(":DateVisit",ui->dateVisit->dateTime());
        query.bindValue(":DoctorFIO",ui->textDoctor->text());
        query.bindValue(":DoctorPosition",ui->textPosition->text());
        query.bindValue(":Status",ui->textStatus->text());
        query.bindValue(":Sum",ui->textSum->text());
        query.bindValue(":MedCard",ui->textCard->text());
        query.exec();
        int Id = query.lastInsertId().toInt();
        foreach(int serviceId, serviceIds)
        {
            query.prepare("INSERT INTO VisitService (VisitId, ServiceId) VALUES (:VisitId, :ServiceId)");
            query.bindValue(":VisitId", Id);
            query.bindValue(":ServiceId", serviceId);
            query.exec();
        }
        db.commit();
        db.close();
        QMessageBox::information(this,"Стоматологическая клиника","Визит успешно добавлен");
    } catch (QException ex) {
        db.rollback();
        db.close();
        QMessageBox::warning(this,"Стоматологическая клиника",ex.what());
    }
}
