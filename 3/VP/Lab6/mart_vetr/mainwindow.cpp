#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myform = new mart_vetr();
    //connect(ui->pushButton_2, SIGNAL(clicked()), myform, SLOT(show()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(onButtonSend()));
    connect(this, SIGNAL(sendData(QString)), myform, SLOT(recieveData(QString)));
}

void MainWindow::on_pushButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(0, "Выберите изображение", QDir::currentPath(), "*.png *.jpg *.gif *.jpeg");
    ui->lineEdit_4->setText(filename);
    QImage image1(filename);
    ui->label_4->setPixmap(QPixmap::fromImage(image1));
}

void MainWindow::on_pushButton_2_clicked()
{
    if(ui->lineEdit_3->text().isEmpty() || ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty()
            ||ui->lineEdit_4->text().isEmpty() ||  ui->dateEdit->text().isEmpty()
            || (ui->radioButton->isChecked() == false && ui->radioButton_2->isChecked() == false))
    {
        QMessageBox::information(0, "Информация", "Заполните пустые поля!");
        return;
    }
    QString st = ui->lineEdit_4->text() + "*" + ui->lineEdit->text() + "\n" + ui->lineEdit_2->text()
            + "\n" + ui->dateEdit->text() + "\n" + ui->lineEdit_3->text();
    if(ui->radioButton->isChecked() == true)
    {
        st += "\nпол: мужской";
    }
    else
    {
        st += "\nпол: женский";
    }

    emit sendData(st);
    myform->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
