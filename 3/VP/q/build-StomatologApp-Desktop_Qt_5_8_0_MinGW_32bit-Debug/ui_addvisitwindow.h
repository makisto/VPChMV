/********************************************************************************
** Form generated from reading UI file 'addvisitwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDVISITWINDOW_H
#define UI_ADDVISITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddVisit
{
public:
    QWidget *centralwidget;
    QPushButton *visitAdd;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_8;
    QLabel *label_9;
    QComboBox *comboClient;
    QDateTimeEdit *dateVisit;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *textDoctor;
    QLineEdit *textPosition;
    QPushButton *serviceButton;
    QLineEdit *textSum;
    QLineEdit *textStatus;
    QLabel *label_15;
    QLineEdit *textCard;

    void setupUi(QMainWindow *AddVisit)
    {
        if (AddVisit->objectName().isEmpty())
            AddVisit->setObjectName(QStringLiteral("AddVisit"));
        AddVisit->resize(385, 260);
        centralwidget = new QWidget(AddVisit);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        visitAdd = new QPushButton(centralwidget);
        visitAdd->setObjectName(QStringLiteral("visitAdd"));
        visitAdd->setGeometry(QRect(70, 230, 261, 23));
        visitAdd->setStyleSheet(QStringLiteral("background-color:#48FFD5"));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 351, 211));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(11);
        label_8->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_9);

        comboClient = new QComboBox(formLayoutWidget);
        comboClient->setObjectName(QStringLiteral("comboClient"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboClient);

        dateVisit = new QDateTimeEdit(formLayoutWidget);
        dateVisit->setObjectName(QStringLiteral("dateVisit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, dateVisit);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_10);

        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(formLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(formLayoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_13);

        label_14 = new QLabel(formLayoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_14);

        textDoctor = new QLineEdit(formLayoutWidget);
        textDoctor->setObjectName(QStringLiteral("textDoctor"));

        formLayout->setWidget(3, QFormLayout::FieldRole, textDoctor);

        textPosition = new QLineEdit(formLayoutWidget);
        textPosition->setObjectName(QStringLiteral("textPosition"));

        formLayout->setWidget(4, QFormLayout::FieldRole, textPosition);

        serviceButton = new QPushButton(formLayoutWidget);
        serviceButton->setObjectName(QStringLiteral("serviceButton"));

        formLayout->setWidget(5, QFormLayout::FieldRole, serviceButton);

        textSum = new QLineEdit(formLayoutWidget);
        textSum->setObjectName(QStringLiteral("textSum"));

        formLayout->setWidget(6, QFormLayout::FieldRole, textSum);

        textStatus = new QLineEdit(formLayoutWidget);
        textStatus->setObjectName(QStringLiteral("textStatus"));

        formLayout->setWidget(7, QFormLayout::FieldRole, textStatus);

        label_15 = new QLabel(formLayoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_15);

        textCard = new QLineEdit(formLayoutWidget);
        textCard->setObjectName(QStringLiteral("textCard"));

        formLayout->setWidget(2, QFormLayout::FieldRole, textCard);

        AddVisit->setCentralWidget(centralwidget);

        retranslateUi(AddVisit);

        QMetaObject::connectSlotsByName(AddVisit);
    } // setupUi

    void retranslateUi(QMainWindow *AddVisit)
    {
        AddVisit->setWindowTitle(QApplication::translate("AddVisit", "MainWindow", Q_NULLPTR));
        visitAdd->setText(QApplication::translate("AddVisit", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        label_8->setText(QApplication::translate("AddVisit", "\320\237\320\260\321\206\320\270\320\265\320\275\321\202", Q_NULLPTR));
        label_9->setText(QApplication::translate("AddVisit", "\320\224\320\260\321\202\320\260 \320\262\320\270\320\267\320\270\321\202\320\260", Q_NULLPTR));
        label_10->setText(QApplication::translate("AddVisit", "\320\244\320\230\320\236 \320\262\321\200\320\260\321\207\320\260", Q_NULLPTR));
        label_11->setText(QApplication::translate("AddVisit", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214 \320\262\321\200\320\260\321\207\320\260", Q_NULLPTR));
        label_12->setText(QApplication::translate("AddVisit", "\320\243\321\201\320\273\321\203\320\263\320\270", Q_NULLPTR));
        label_13->setText(QApplication::translate("AddVisit", "\320\241\321\203\320\274\320\274\320\260", Q_NULLPTR));
        label_14->setText(QApplication::translate("AddVisit", "\320\241\321\202\320\260\321\202\321\203\321\201", Q_NULLPTR));
        serviceButton->setText(QApplication::translate("AddVisit", "\320\241\320\277\320\270\321\201\320\276\320\272 \321\203\321\201\320\273\321\203\320\263", Q_NULLPTR));
        label_15->setText(QApplication::translate("AddVisit", "\320\235\320\276\320\274\320\265\321\200 \320\272\320\260\321\200\321\202\321\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddVisit: public Ui_AddVisit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDVISITWINDOW_H
