/********************************************************************************
** Form generated from reading UI file 'forminfo.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMINFO_H
#define UI_FORMINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormInfo
{
public:
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *FormInfo)
    {
        if (FormInfo->objectName().isEmpty())
            FormInfo->setObjectName(QStringLiteral("FormInfo"));
        FormInfo->resize(620, 450);
        horizontalLayout = new QHBoxLayout(FormInfo);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textBrowser = new QTextBrowser(FormInfo);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        horizontalLayout->addWidget(textBrowser);


        retranslateUi(FormInfo);

        QMetaObject::connectSlotsByName(FormInfo);
    } // setupUi

    void retranslateUi(QWidget *FormInfo)
    {
        FormInfo->setWindowTitle(QApplication::translate("FormInfo", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormInfo: public Ui_FormInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMINFO_H
