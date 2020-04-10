/********************************************************************************
** Form generated from reading UI file 'addclientwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCLIENTWINDOW_H
#define UI_ADDCLIENTWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddClientWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QLabel *label_5;
    QLineEdit *textFIO;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *textPhone;
    QLineEdit *textPassport;
    QLineEdit *textAddress;
    QLineEdit *textEmail;
    QDateEdit *dateBirth;

    void setupUi(QMainWindow *AddClientWindow)
    {
        if (AddClientWindow->objectName().isEmpty())
            AddClientWindow->setObjectName(QStringLiteral("AddClientWindow"));
        AddClientWindow->resize(322, 277);
        centralwidget = new QWidget(AddClientWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 240, 281, 23));
        pushButton->setStyleSheet(QStringLiteral("background-color:#48FFD5"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 281, 211));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(11);
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        textFIO = new QLineEdit(gridLayoutWidget);
        textFIO->setObjectName(QStringLiteral("textFIO"));

        gridLayout->addWidget(textFIO, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        textPhone = new QLineEdit(gridLayoutWidget);
        textPhone->setObjectName(QStringLiteral("textPhone"));

        gridLayout->addWidget(textPhone, 2, 1, 1, 1);

        textPassport = new QLineEdit(gridLayoutWidget);
        textPassport->setObjectName(QStringLiteral("textPassport"));

        gridLayout->addWidget(textPassport, 3, 1, 1, 1);

        textAddress = new QLineEdit(gridLayoutWidget);
        textAddress->setObjectName(QStringLiteral("textAddress"));

        gridLayout->addWidget(textAddress, 4, 1, 1, 1);

        textEmail = new QLineEdit(gridLayoutWidget);
        textEmail->setObjectName(QStringLiteral("textEmail"));

        gridLayout->addWidget(textEmail, 5, 1, 1, 1);

        dateBirth = new QDateEdit(gridLayoutWidget);
        dateBirth->setObjectName(QStringLiteral("dateBirth"));
        dateBirth->setCalendarPopup(true);
        dateBirth->setDate(QDate(1997, 1, 8));

        gridLayout->addWidget(dateBirth, 1, 1, 1, 1);

        AddClientWindow->setCentralWidget(centralwidget);

        retranslateUi(AddClientWindow);

        QMetaObject::connectSlotsByName(AddClientWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AddClientWindow)
    {
        AddClientWindow->setWindowTitle(QApplication::translate("AddClientWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\260\321\206\320\270\320\265\320\275\321\202\320\260", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AddClientWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        label_8->setText(QApplication::translate("AddClientWindow", "\320\244\320\230\320\236", Q_NULLPTR));
        label_5->setText(QApplication::translate("AddClientWindow", "\320\220\320\264\321\200\320\265\321\201", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddClientWindow", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddClientWindow", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddClientWindow", "\320\237\320\260\321\201\320\277\320\276\321\200\321\202", Q_NULLPTR));
        label_6->setText(QApplication::translate("AddClientWindow", "Email", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddClientWindow: public Ui_AddClientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCLIENTWINDOW_H
