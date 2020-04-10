#include "addevent.h"
#include "ui_addevent.h"

addEvent::addEvent(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addEvent)
{
    ui->setupUi(this);
    QFont font(QString("Times New Roman"), 9);
    ui->label->setFont(font);
    ui->comboBox->setFont(font);
    setStyleSheet(                    "QPushButton { background-color: (25,25,100);"
                                      "padding:4px;color:(25,25,25);font-size: 14px;"
                                      "border-radius: 4px;border: 1px solid #3873d9;"
                                      "}"
                                        );
}

addEvent::~addEvent()
{
    delete ui;
}

void addEvent::closeEvent(QCloseEvent *event)
{
        emit doIt();
        event->accept();
}

void addEvent::letIndex(QModelIndexList tindex)
{
  index=tindex;
}

void addEvent::on_pushButton_clicked()
{
        try
        {
            int Id = index[0].data().toInt();
            QSqlQuery query;
            query.prepare("UPDATE " TABLE " SET " TABLE_STATUS " = :Status WHERE id = :Id");
            query.bindValue(":Id", Id);
            query.bindValue(":Status", ui->comboBox->currentText());
            query.exec();
            QMessageBox::information(this,"Ежедневник","Статус изменен");
        }
        catch (QException ex)
        {
            QMessageBox::warning(this,"Ежедневник",ex.what());
        }
        this->close();
}
