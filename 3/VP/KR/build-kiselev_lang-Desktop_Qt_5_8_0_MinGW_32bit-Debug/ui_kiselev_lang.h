/********************************************************************************
** Form generated from reading UI file 'kiselev_lang.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KISELEV_LANG_H
#define UI_KISELEV_LANG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kiselev_lang
{
public:
    QWidget *centralWidget;
    QTableView *tableView;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *kiselev_lang)
    {
        if (kiselev_lang->objectName().isEmpty())
            kiselev_lang->setObjectName(QStringLiteral("kiselev_lang"));
        kiselev_lang->resize(1100, 800);
        centralWidget = new QWidget(kiselev_lang);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 130, 1031, 611));
        QFont font;
        font.setPointSize(14);
        tableView->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 10, 511, 51));
        QFont font1;
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(810, 70, 250, 41));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 70, 250, 41));
        pushButton_2->setFont(font2);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(290, 70, 250, 41));
        pushButton_3->setFont(font2);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(550, 70, 250, 41));
        pushButton_4->setFont(font2);
        kiselev_lang->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(kiselev_lang);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1100, 21));
        kiselev_lang->setMenuBar(menuBar);
        mainToolBar = new QToolBar(kiselev_lang);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        kiselev_lang->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(kiselev_lang);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        kiselev_lang->setStatusBar(statusBar);

        retranslateUi(kiselev_lang);

        QMetaObject::connectSlotsByName(kiselev_lang);
    } // setupUi

    void retranslateUi(QMainWindow *kiselev_lang)
    {
        kiselev_lang->setWindowTitle(QApplication::translate("kiselev_lang", "kiselev_lang", Q_NULLPTR));
        label->setText(QApplication::translate("kiselev_lang", "OK?", Q_NULLPTR));
        pushButton->setText(QApplication::translate("kiselev_lang", "\320\236\321\202\321\207\321\221\321\202 \320\277\320\276 \320\277\321\200\320\276\320\264\320\260\320\266\320\260\320\274", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("kiselev_lang", "\320\222\321\213\320\261\320\276\321\200 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202\320\260", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("kiselev_lang", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\202\320\276\320\262\320\260\321\200", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("kiselev_lang", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\202\320\276\320\262\320\260\321\200", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class kiselev_lang: public Ui_kiselev_lang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KISELEV_LANG_H
