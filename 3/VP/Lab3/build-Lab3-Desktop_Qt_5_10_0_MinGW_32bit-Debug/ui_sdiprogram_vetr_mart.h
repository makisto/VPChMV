/********************************************************************************
** Form generated from reading UI file 'sdiprogram_vetr_mart.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SDIPROGRAM_VETR_MART_H
#define UI_SDIPROGRAM_VETR_MART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SDIProgram_Vetr_Mart
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SDIProgram_Vetr_Mart)
    {
        if (SDIProgram_Vetr_Mart->objectName().isEmpty())
            SDIProgram_Vetr_Mart->setObjectName(QStringLiteral("SDIProgram_Vetr_Mart"));
        SDIProgram_Vetr_Mart->resize(400, 300);
        menuBar = new QMenuBar(SDIProgram_Vetr_Mart);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        SDIProgram_Vetr_Mart->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SDIProgram_Vetr_Mart);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SDIProgram_Vetr_Mart->addToolBar(mainToolBar);
        centralWidget = new QWidget(SDIProgram_Vetr_Mart);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SDIProgram_Vetr_Mart->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SDIProgram_Vetr_Mart);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SDIProgram_Vetr_Mart->setStatusBar(statusBar);

        retranslateUi(SDIProgram_Vetr_Mart);

        QMetaObject::connectSlotsByName(SDIProgram_Vetr_Mart);
    } // setupUi

    void retranslateUi(QMainWindow *SDIProgram_Vetr_Mart)
    {
        SDIProgram_Vetr_Mart->setWindowTitle(QApplication::translate("SDIProgram_Vetr_Mart", "SDIProgram_Vetr_Mart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SDIProgram_Vetr_Mart: public Ui_SDIProgram_Vetr_Mart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SDIPROGRAM_VETR_MART_H
