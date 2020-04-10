#ifndef INPUTDIALOG_VETRINSKIY_MARTASOV_H
#define INPUTDIALOG_VETRINSKIY_MARTASOV_H

#include <QDialog>
#include <QLineEdit>

class QLineEdit;

class inputdialog_Vetrinskiy_Martasov:public QDialog
{
    Q_OBJECT
private:
    QLineEdit *m_ptxtFirstName;
    QLineEdit *m_ptxtLastName;
public:
    inputdialog_Vetrinskiy_Martasov(QWidget *pwgt = 0);

    QString firstName() const;
    QString lastName() const;
};

#endif // INPUTDIALOG_VETRINSKIY_MARTASOV_H
