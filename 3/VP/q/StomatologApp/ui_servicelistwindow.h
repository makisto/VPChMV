/********************************************************************************
** Form generated from reading UI file 'servicelistwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVICELISTWINDOW_H
#define UI_SERVICELISTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServiceListWindow
{
public:
    QWidget *centralwidget;
    QPushButton *saveButton;
    QTableView *tableService;
    QPushButton *addButton;
    QComboBox *comboService;
    QPushButton *deleteButton;

    void setupUi(QMainWindow *ServiceListWindow)
    {
        if (ServiceListWindow->objectName().isEmpty())
            ServiceListWindow->setObjectName(QStringLiteral("ServiceListWindow"));
        ServiceListWindow->resize(544, 372);
        centralwidget = new QWidget(ServiceListWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(110, 330, 301, 23));
        tableService = new QTableView(centralwidget);
        tableService->setObjectName(QStringLiteral("tableService"));
        tableService->setGeometry(QRect(20, 70, 491, 231));
        tableService->setSelectionMode(QAbstractItemView::SingleSelection);
        tableService->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableService->verticalHeader()->setVisible(false);
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(320, 10, 71, 23));
        comboService = new QComboBox(centralwidget);
        comboService->setObjectName(QStringLiteral("comboService"));
        comboService->setGeometry(QRect(10, 10, 291, 22));
        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(400, 10, 71, 23));
        ServiceListWindow->setCentralWidget(centralwidget);

        retranslateUi(ServiceListWindow);

        QMetaObject::connectSlotsByName(ServiceListWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ServiceListWindow)
    {
        ServiceListWindow->setWindowTitle(QApplication::translate("ServiceListWindow", "MainWindow", 0));
        saveButton->setText(QApplication::translate("ServiceListWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \321\203\321\201\320\273\321\203\320\263", 0));
        addButton->setText(QApplication::translate("ServiceListWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        deleteButton->setText(QApplication::translate("ServiceListWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class ServiceListWindow: public Ui_ServiceListWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVICELISTWINDOW_H
