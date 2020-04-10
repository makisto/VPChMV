/********************************************************************************
** Form generated from reading UI file 'forminfo.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMINFO_H
#define UI_FORMINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormInfo
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QWidget *FormInfo)
    {
        if (FormInfo->objectName().isEmpty())
            FormInfo->setObjectName(QStringLiteral("FormInfo"));
        FormInfo->resize(706, 455);
        QIcon icon;
        icon.addFile(QStringLiteral("icons/t.png"), QSize(), QIcon::Normal, QIcon::Off);
        FormInfo->setWindowIcon(icon);
        textBrowser = new QTextBrowser(FormInfo);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 681, 431));

        retranslateUi(FormInfo);

        QMetaObject::connectSlotsByName(FormInfo);
    } // setupUi

    void retranslateUi(QWidget *FormInfo)
    {
        FormInfo->setWindowTitle(QApplication::translate("FormInfo", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class FormInfo: public Ui_FormInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMINFO_H
