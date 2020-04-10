/********************************************************************************
** Form generated from reading UI file 'visitwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISITWINDOW_H
#define UI_VISITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VisitWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tableVisit;
    QPushButton *addVisit;
    QPushButton *visitDelete;
    QPushButton *visitUpdate;
    QWidget *tab_2;
    QTableView *tableClient;
    QPushButton *clientDelete;
    QPushButton *pushButton_4;
    QPushButton *clientUpdate;
    QWidget *tab_3;
    QTableView *tableService;
    QPushButton *serviceDelete;
    QPushButton *serviceAdd;
    QPushButton *serviceUpdate;
    QPushButton *Help;
    QPushButton *choiceot;
    QPushButton *ot;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VisitWindow)
    {
        if (VisitWindow->objectName().isEmpty())
            VisitWindow->setObjectName(QStringLiteral("VisitWindow"));
        VisitWindow->resize(847, 435);
        QIcon icon;
        icon.addFile(QStringLiteral("icons/t.png"), QSize(), QIcon::Normal, QIcon::Off);
        VisitWindow->setWindowIcon(icon);
        centralWidget = new QWidget(VisitWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 40, 801, 361));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableVisit = new QTableView(tab);
        tableVisit->setObjectName(QStringLiteral("tableVisit"));
        tableVisit->setGeometry(QRect(10, 40, 771, 291));
        tableVisit->setSelectionMode(QAbstractItemView::SingleSelection);
        tableVisit->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableVisit->verticalHeader()->setVisible(false);
        addVisit = new QPushButton(tab);
        addVisit->setObjectName(QStringLiteral("addVisit"));
        addVisit->setGeometry(QRect(10, 10, 231, 23));
        visitDelete = new QPushButton(tab);
        visitDelete->setObjectName(QStringLiteral("visitDelete"));
        visitDelete->setGeometry(QRect(480, 10, 241, 23));
        visitUpdate = new QPushButton(tab);
        visitUpdate->setObjectName(QStringLiteral("visitUpdate"));
        visitUpdate->setGeometry(QRect(250, 10, 221, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableClient = new QTableView(tab_2);
        tableClient->setObjectName(QStringLiteral("tableClient"));
        tableClient->setGeometry(QRect(10, 40, 771, 291));
        tableClient->setStyleSheet(QStringLiteral(""));
        tableClient->setSelectionMode(QAbstractItemView::SingleSelection);
        tableClient->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableClient->verticalHeader()->setVisible(false);
        clientDelete = new QPushButton(tab_2);
        clientDelete->setObjectName(QStringLiteral("clientDelete"));
        clientDelete->setGeometry(QRect(470, 10, 251, 23));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 10, 221, 23));
        clientUpdate = new QPushButton(tab_2);
        clientUpdate->setObjectName(QStringLiteral("clientUpdate"));
        clientUpdate->setGeometry(QRect(240, 10, 221, 23));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tableService = new QTableView(tab_3);
        tableService->setObjectName(QStringLiteral("tableService"));
        tableService->setGeometry(QRect(10, 40, 441, 291));
        tableService->setSelectionMode(QAbstractItemView::SingleSelection);
        tableService->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableService->verticalHeader()->setVisible(false);
        serviceDelete = new QPushButton(tab_3);
        serviceDelete->setObjectName(QStringLiteral("serviceDelete"));
        serviceDelete->setGeometry(QRect(470, 10, 251, 23));
        serviceAdd = new QPushButton(tab_3);
        serviceAdd->setObjectName(QStringLiteral("serviceAdd"));
        serviceAdd->setGeometry(QRect(10, 10, 221, 23));
        serviceUpdate = new QPushButton(tab_3);
        serviceUpdate->setObjectName(QStringLiteral("serviceUpdate"));
        serviceUpdate->setGeometry(QRect(240, 10, 221, 23));
        tabWidget->addTab(tab_3, QString());
        Help = new QPushButton(centralWidget);
        Help->setObjectName(QStringLiteral("Help"));
        Help->setGeometry(QRect(750, 10, 71, 21));
        QIcon icon1;
        icon1.addFile(QStringLiteral("icons/vop.png"), QSize(), QIcon::Normal, QIcon::Off);
        Help->setIcon(icon1);
        choiceot = new QPushButton(centralWidget);
        choiceot->setObjectName(QStringLiteral("choiceot"));
        choiceot->setGeometry(QRect(560, 10, 91, 23));
        ot = new QPushButton(centralWidget);
        ot->setObjectName(QStringLiteral("ot"));
        ot->setGeometry(QRect(444, 10, 91, 23));
        VisitWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(VisitWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        VisitWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VisitWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        VisitWindow->setStatusBar(statusBar);

        mainToolBar->addSeparator();

        retranslateUi(VisitWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(VisitWindow);
    } // setupUi

    void retranslateUi(QMainWindow *VisitWindow)
    {
        VisitWindow->setWindowTitle(QApplication::translate("VisitWindow", "\320\241\321\202\320\276\320\274\320\260\321\202\320\276\320\273\320\276\320\263\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \320\272\320\273\320\270\320\275\320\270\320\272\320\260", 0));
        addVisit->setText(QApplication::translate("VisitWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        visitDelete->setText(QApplication::translate("VisitWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        visitUpdate->setText(QApplication::translate("VisitWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("VisitWindow", "\320\222\320\270\320\267\320\270\321\202\321\213", 0));
        clientDelete->setText(QApplication::translate("VisitWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        pushButton_4->setText(QApplication::translate("VisitWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        clientUpdate->setText(QApplication::translate("VisitWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("VisitWindow", "\320\237\320\260\321\206\320\270\320\265\320\275\321\202\321\213", 0));
        serviceDelete->setText(QApplication::translate("VisitWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        serviceAdd->setText(QApplication::translate("VisitWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        serviceUpdate->setText(QApplication::translate("VisitWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("VisitWindow", "\320\243\321\201\320\273\321\203\320\263\320\270", 0));
        Help->setText(QString());
        choiceot->setText(QApplication::translate("VisitWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\276\321\202\321\207\320\265\321\202", 0));
        ot->setText(QApplication::translate("VisitWindow", "C\320\276\320\267\320\264\320\260\321\202\321\214 \320\276\321\202\321\207\320\265\321\202", 0));
    } // retranslateUi

};

namespace Ui {
    class VisitWindow: public Ui_VisitWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISITWINDOW_H
