#include "servicelistwindow.h"
#include "ui_servicelistwindow.h"

ServiceListWindow::ServiceListWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ServiceListWindow)
{
    ui->setupUi(this);
    Constants::DBInit(db);
    loadServices();
    serviceIds = QList<int>();
    connect(this, SIGNAL(sendData(QList<int>)), parent, SLOT(recieveData(QList<int>))); // подключение сигнала к слоту нашей формы
}
void ServiceListWindow::loadTable()
{
    Constants::DBInit(db);
    QString Ids = "SELECT ServiceId, Name, Price FROM Service Where ServiceId IN (";
    for(int i=0; i<serviceIds.size(); i++)
    {
         Ids += QString::number(serviceIds[i]);
         if(i<serviceIds.size()-1)
            Ids += "," ;
    }
    Ids += ")";
    db.open();
    QSqlQuery query;
    query.prepare(Ids);
    query.exec();
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, tr("Id"));
    model->setHeaderData(1, Qt::Horizontal, tr("Название услуги"));
    model->setHeaderData(2, Qt::Horizontal, tr("Стоимость"));
    db.close();
    ui->tableService->setModel(model);
    ui->tableService->resizeColumnsToContents();
}
void ServiceListWindow::loadServices()
{
    db.open();
    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery query;
    query.exec("SELECT Name, ServiceId FROM Service");
    model->setQuery(query);
    ui->comboService->setModel(model);
    db.close();
}
ServiceListWindow::~ServiceListWindow()
{
    delete ui;
}

void ServiceListWindow::on_saveButton_clicked()
{
    emit sendData(serviceIds); // вызываем сигнал, в котором передаём введённые данные
    QMessageBox::information(this,"Стоматологическая клиника","Список успешно сохранен.");
    close();
}
void ServiceListWindow::recieveList(QList<int> services)
{
    serviceIds=services;
    loadTable();
}

void ServiceListWindow::on_addButton_clicked()
{
    Constants::DBInit(db);
    db.open();
    QSqlQuery query;
    query.prepare("SELECT ServiceId From Service Where Name = :Name");
    query.bindValue(":Name",  ui->comboService->currentText());
    query.exec();
    query.next();
    int Id = query.value(0).toInt();
    if(!serviceIds.contains(Id))
    {
        serviceIds.append(Id);
    }
    db.close();
    loadTable();
}

void ServiceListWindow::on_deleteButton_clicked()
{
    if( ui->tableService->currentIndex().isValid())
    {
    try {
         QModelIndexList index = ui->tableService->selectionModel()->selectedRows(0);
         serviceIds.removeOne(index[0].data().toInt());
         loadTable();
         QMessageBox::information(this,"Стоматологическая клиника","Услуга успешно удалена");
     } catch (QException ex) {
         QMessageBox::warning(this,"Стоматологическая клиника",ex.what());
     }
        }
        else {
            QMessageBox::warning(this,"Стоматологическая клиника","Услуга не выбрана");
         }
}
