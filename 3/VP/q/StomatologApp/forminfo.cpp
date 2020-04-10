#include "forminfo.h"
#include "ui_forminfo.h"
#include <QIcon>

FormInfo::FormInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormInfo)
{
    ui->setupUi(this);
    this->setWindowTitle("Помощь");
    this->setWindowIcon(QIcon("C:/Users/Dasha/Desktop/q/StomatologApp/icons/t.png"));
    QFile file("C:/Users/Dasha/Desktop/q/StomatologApp/help/help.html");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    ui->textBrowser->setHtml(file.readAll());

}

FormInfo::~FormInfo()
{
    delete ui;
}
