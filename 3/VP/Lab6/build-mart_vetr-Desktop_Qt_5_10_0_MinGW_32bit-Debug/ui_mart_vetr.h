/********************************************************************************
** Form generated from reading UI file 'mart_vetr.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MART_VETR_H
#define UI_MART_VETR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mart_vetr
{
public:
    QLabel *label;
    QTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *mart_vetr)
    {
        if (mart_vetr->objectName().isEmpty())
            mart_vetr->setObjectName(QStringLiteral("mart_vetr"));
        mart_vetr->resize(400, 300);
        label = new QLabel(mart_vetr);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 91, 241));
        label->setMaximumSize(QSize(91, 241));
        textEdit = new QTextEdit(mart_vetr);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(130, 10, 251, 231));
        buttonBox = new QDialogButtonBox(mart_vetr);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(160, 250, 211, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Open|QDialogButtonBox::Reset|QDialogButtonBox::Save);

        retranslateUi(mart_vetr);

        QMetaObject::connectSlotsByName(mart_vetr);
    } // setupUi

    void retranslateUi(QWidget *mart_vetr)
    {
        mart_vetr->setWindowTitle(QApplication::translate("mart_vetr", "Form", nullptr));
        label->setText(QApplication::translate("mart_vetr", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mart_vetr: public Ui_mart_vetr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MART_VETR_H
