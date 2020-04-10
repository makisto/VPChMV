#include "mart_vetr.h"
#include "ui_mart_vetr.h"
#include <QColorDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>

mart_vetr::mart_vetr(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mart_vetr)
{
    ui->setupUi(this);
}

void mart_vetr::recieveData(QString str)
{
    QStringList lst = str.split("*");
    ui->textEdit->setText(lst.at(1) + "\n" + lst.at(0));
    if(lst.size() > 1)
    {
        QImage image1(lst.at(0));
        ui->label->setPixmap(QPixmap::fromImage(image1));
    }
}

mart_vetr::~mart_vetr()
{
    delete ui;
}

void mart_vetr::on_buttonBox_clicked(QAbstractButton *button)
{
    if(button->text() == "Reset")
    {
        ui->textEdit->clear();
        ui->label->clear();
    }
    if(button->text() == "Save")
    {
        QString m_strFileName;
        QString str = QFileDialog::getSaveFileName(0, m_strFileName);
        if(!str.isEmpty())
        {
            m_strFileName = str;
            if(m_strFileName.isEmpty())
            {
                return;
            }
            QFile file(m_strFileName);
            if(file.open(QIODevice::WriteOnly))
            {
                QTextStream(&file)<<ui->textEdit->toPlainText();
                file.close();
                //emit changeWindowTitle(m_strFileName);
            }
            QMessageBox::information(0, "Информация", "Сохранение прошло успешно!");
        }
    }
    if(button->text() == "Open")
    {
        QString m_strFileName;
        QString str = QFileDialog::getOpenFileName();
        if(str.isEmpty())
        {
            return;
        }

        QFile file(str);
        if(file.open(QIODevice::ReadOnly))
        {
            QTextStream stream(&file);
            ui->textEdit->setPlainText(stream.readAll());
            file.close();

            QStringList inf = ui->textEdit->toPlainText().split("\n");
            QImage image2(inf.at(5));
            ui->label->setPixmap(QPixmap::fromImage(image2));
            m_strFileName = str;
            //emit changeWindowTitle(m_strFileName);
        }
    }
}
