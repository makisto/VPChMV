#include "select.h"
#include "kiselev_lang.h"
#include "ui_select.h"

select::select(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::select)
{
    ui->setupUi(this);
    QObject::connect(ui->OK, SIGNAL(clicked()), this, SLOT(SelectSignal()));
    QObject::connect(ui->Cancel, SIGNAL(clicked()), this, SLOT(close()));
}

void select::SelectSignal()
{    
    if(ui->Box_Kat->isChecked()) emit S(1);
    if(ui->Box_Otch->isChecked()) emit S(2);
    if(ui->Box_Galstuki->isChecked()) emit S(3);
    if(ui->Box_Djinsi->isChecked()) emit S(4);
    if(ui->Box_Noski->isChecked()) emit S(5);
    if(ui->Box_Rubashki->isChecked()) emit S(6);
    if(ui->Box_Sport->isChecked()) emit S(7);
    if(ui->Box_Futbolki->isChecked()) emit S(8);
    if(ui->Box_Ubki->isChecked()) emit S(9);
    if(ui->Box_PP->isChecked()) emit S(10);
    if(ui->Box_Man->isChecked()) emit S(11);
    if(ui->Box_Fem->isChecked()) emit S(12);
    if(ui->Box_Child->isChecked()) emit S(13);
    if(ui->Box_Vzr->isChecked()) emit S(14);
    this->close();
}

select::~select()
{
    delete ui;
}
