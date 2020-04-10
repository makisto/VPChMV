#ifndef STARTDIALOG_VETRINSKIY_MARTASOV_H
#define STARTDIALOG_VETRINSKIY_MARTASOV_H

#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include "inputdialog_vetrinskiy_martasov.h"

class StartDialog_Vetrinskiy_Martasov:public QPushButton
{
    Q_OBJECT
public:
    StartDialog_Vetrinskiy_Martasov(QWidget *pwgt = 0) : QPushButton("Нажми", pwgt)
    {
        connect(this, SIGNAL(clicked()), SLOT(slotButtonClicked()));
    }
   public slots:
    void slotButtonClicked()
    {
        inputdialog_Vetrinskiy_Martasov *pInputDialog = new inputdialog_Vetrinskiy_Martasov;
        if(pInputDialog->exec()==QDialog::Accepted)
        {
            QMessageBox::information(0,
                                     "Ваша информация: ",
                                     "Имя: "
                                     + pInputDialog->firstName()
                                     +"\nФамилия: "
                                     + pInputDialog->lastName()
                                     );
        }
        delete pInputDialog;
    }

};

#endif // STARTDIALOG_VETRINSKIY_MARTASOV_H
