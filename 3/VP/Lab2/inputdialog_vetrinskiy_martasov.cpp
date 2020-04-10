#include "inputdialog_vetrinskiy_martasov.h"
#include <QLabel>
#include <QLayout>
#include <QString>
#include <QPushButton>

inputdialog_Vetrinskiy_Martasov::inputdialog_Vetrinskiy_Martasov(QWidget *pwgt):QDialog(pwgt)
{
   m_ptxtFirstName = new QLineEdit;
   m_ptxtLastName = new QLineEdit;

   QLabel *plblFirstName = new QLabel("&Имя");
   QLabel *plblLastName = new QLabel("&Фамилия");

   plblFirstName->setBuddy(m_ptxtFirstName);
   plblLastName->setBuddy(m_ptxtLastName);

   QPushButton *pcmdOk = new QPushButton("&OK");
   QPushButton *pcmdCancel = new QPushButton("&Cancel");

   connect(pcmdOk, SIGNAL(clicked()), SLOT(accept()));
   connect(pcmdCancel, SIGNAL(clicked()), SLOT(reject()));

   QGridLayout *ptopLayout = new QGridLayout;
   ptopLayout->addWidget(plblFirstName,0,0);
   ptopLayout->addWidget(plblLastName,1,0);
   ptopLayout->addWidget(m_ptxtFirstName,0,1);
   ptopLayout->addWidget(m_ptxtLastName,1,1);
   ptopLayout->addWidget(pcmdOk,2,0);
   ptopLayout->addWidget(pcmdCancel,2,1);
   setLayout(ptopLayout);
}

QString inputdialog_Vetrinskiy_Martasov::firstName() const
{
    return m_ptxtFirstName->text();
}

QString inputdialog_Vetrinskiy_Martasov::lastName() const
{
    return m_ptxtLastName->text();
}
