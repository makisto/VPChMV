#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "auth.h"
#include "ui_auth.h"
#include "QFileDialog"
#include "QTextDocumentWriter"

void MainWindow::About_Lab1()
{
    auth *dg = new auth();
    dg->show();
}

void MainWindow::slotOpen()
{
    QString filename = QFileDialog::getOpenFileName(0, "Открыть файл", QDir::currentPath(), "*.cpp *.txt");
    QFile file(filename);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        ui->textEdit->setPlainText(file.readAll());
    }
}

void MainWindow::slotSave()
{
    QString filename = QFileDialog::getSaveFileName(0, "Сохранить файл", QDir::currentPath(), "*.cpp *.txt");
    QTextDocumentWriter writer;
    writer.setFileName(filename);
    writer.write(ui->textEdit->document());
}

void MainWindow::slotClear()
{
    ui->textEdit->clear();
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->action, SIGNAL(triggered()), this, SLOT(About_Lab1()));
    QAction *pactOpen = new QAction("Открытие файла", 0);
    QAction *pactSave = new QAction("Сохранение файла", 0);
    QAction *pactClear = new QAction("Очистка файла", 0);
    pactOpen->setText("Открыть");
    pactSave->setText("Сохранить");
    pactClear->setText("Очистить");
    pactOpen->setShortcut(QKeySequence("CTRL+S"));
    pactSave->setShortcut(QKeySequence("CTRL+G"));
    pactClear->setShortcut(QKeySequence("CTRL+N"));
    pactOpen->setToolTip("Открытие документа");
    pactSave->setToolTip("Сохранение документа");
    pactClear->setToolTip("Очистка документа");
    pactOpen->setStatusTip("Открыть");
    pactSave->setStatusTip("Сохранить");
    pactClear->setStatusTip("Очистить");
    pactOpen->setWhatsThis("Открытие");
    pactSave->setWhatsThis("Сохранение");
    pactClear->setWhatsThis("Очистка");
    pactOpen->setIcon(QPixmap("1.png"));
    pactSave->setIcon(QPixmap("2.png"));
    pactClear->setIcon(QPixmap("3.png"));
    connect(pactOpen, SIGNAL(triggered()), SLOT(slotOpen()));
    connect(pactSave, SIGNAL(triggered()), SLOT(slotSave()));
    connect(pactClear, SIGNAL(triggered()), SLOT(slotClear()));
    QMenu *pmnuFile = new QMenu("Файл");
    pmnuFile->addAction(pactOpen);
    pmnuFile->addAction(pactSave);
    pmnuFile->addAction(pactClear);
    menuBar()->addMenu(pmnuFile);
    ui->mainToolBar->addAction(pactOpen);
    ui->mainToolBar->addAction(pactSave);
    ui->mainToolBar->addAction(pactClear);
}

MainWindow::~MainWindow()
{
    delete ui;
}
