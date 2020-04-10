#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QAxObject>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    db = new DataBase();
    db->connectToDataBase();

    this->setupModel(TABLE,
                     QStringList() << trUtf8("id")
                                   << trUtf8("Дата")
                                   << trUtf8("Начальное Время")
                                   << trUtf8("Конечное Время")
                                   << trUtf8("Событие")
                                   << trUtf8("Статус")
               );

    this->createUI();
    setStyles();
    //setStyleSheet("background-color:#40FAD0");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setStyles()
{
    QFont font(QString("Times New Roman"), 9);
    QString alternativeColor("alternate-background-color:blue;background-color: orange;");
    QString headerColor("QHeaderView::section { background-color:#40FAD0;}");
    ui->tableView->setFont(font);
    ui->tableView->horizontalHeader()->setFont(font);
    ui->tableView->setAlternatingRowColors(true);
    ui->tableView->setStyleSheet(alternativeColor);
    ui->tableView->setStyleSheet(headerColor);
}

void MainWindow::setupModel(const QString &tableName, const QStringList &headers)
{
    model = new QSqlTableModel(this);
    model->setTable(tableName);
    for(int i = 0, j = 0; i < model->columnCount(); i++, j++)
    {
        model->setHeaderData(i,Qt::Horizontal,headers[j]);
    }

    model->setSort(1,Qt::AscendingOrder);
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    QMessageBox::StandardButton resBtn = QMessageBox::question( this, "Ежедневник",
                                                                tr("Вы уверены, что хотите выйти?\n"),
                                                                QMessageBox::No | QMessageBox::Yes,
                                                                QMessageBox::Yes);
    if(resBtn != QMessageBox::Yes)
    {
        event->ignore();
    }
    else
    {
        event->accept();
    }
}

void MainWindow::createUI()
{
    ui->tableView->setModel(model);
    ui->tableView->setColumnHidden(0, true);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
    model->select();
}

void MainWindow::on_pushButton_2_clicked()
{
    if( ui->tableView->currentIndex().isValid())
    {
        QMessageBox::StandardButton resBtn = QMessageBox::question( this, "Ежедневник",
                                                                    tr("Вы уверены, что хотите удалить "
                                                                       "это событие?\n"),
                                                                    QMessageBox::No | QMessageBox::Yes,
                                                                    QMessageBox::Yes);
        if(resBtn == QMessageBox::Yes)
        {
            try
            {
                QModelIndexList index = ui->tableView->selectionModel()->selectedRows(0);
                int Id = index[0].data().toInt();
                QSqlQuery query;
                query.prepare("DELETE FROM " TABLE " WHERE id = :Id");
                query.bindValue(":Id", Id);
                query.exec();
                this->createUI();
                QMessageBox::information(this,"Ежедневник","Событие удалено");
            }
            catch (QException ex)
            {
                QMessageBox::warning(this,"Ежедневник",ex.what());
            }
        }
    }
    else
    {
        QMessageBox::warning(this,"Ежедневник","Событие не выбрано");
    }
}


void MainWindow::on_pushButton_clicked()
{
    eventAdd* ev = new eventAdd(nullptr);
    ev->show();
    connect(ev, SIGNAL(doIt()),this, SLOT(createUI()));
    //this->createUI();
    setStyles();
}

void MainWindow::on_pushButton_3_clicked()
{
    FormInfo* info1 = new FormInfo(nullptr);
    info1->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    if(ui->tableView->currentIndex().isValid())
    {
        QModelIndexList index = ui->tableView->selectionModel()->selectedRows(0);
        addEvent* ev = new addEvent(nullptr);
        connect(ev, SIGNAL(doIt()),this, SLOT(createUI()));
        ev->show();
        ev->letIndex(index);
    }
    else
    {
        QMessageBox::warning(this,"Ежедневник","Событие не выбрано");
    }
    this->createUI();
    setStyles();
}
