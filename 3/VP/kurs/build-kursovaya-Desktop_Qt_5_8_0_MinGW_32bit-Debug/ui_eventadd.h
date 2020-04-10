/********************************************************************************
** Form generated from reading UI file 'eventadd.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTADD_H
#define UI_EVENTADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_eventAdd
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QDateEdit *dateEdit;
    QLabel *label_2;
    QTimeEdit *timeEdit;
    QLabel *label_3;
    QTimeEdit *timeEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QComboBox *comboBox;

    void setupUi(QWidget *eventAdd)
    {
        if (eventAdd->objectName().isEmpty())
            eventAdd->setObjectName(QStringLiteral("eventAdd"));
        eventAdd->resize(266, 205);
        pushButton = new QPushButton(eventAdd);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 160, 141, 23));
        widget = new QWidget(eventAdd);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(21, 13, 236, 126));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, dateEdit);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        timeEdit = new QTimeEdit(widget);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, timeEdit);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        timeEdit_2 = new QTimeEdit(widget);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));

        formLayout->setWidget(2, QFormLayout::FieldRole, timeEdit_2);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBox);


        retranslateUi(eventAdd);

        QMetaObject::connectSlotsByName(eventAdd);
    } // setupUi

    void retranslateUi(QWidget *eventAdd)
    {
        eventAdd->setWindowTitle(QApplication::translate("eventAdd", "\320\241\320\276\320\261\321\213\321\202\320\270\320\265", Q_NULLPTR));
        pushButton->setText(QApplication::translate("eventAdd", "OK", Q_NULLPTR));
        label->setText(QApplication::translate("eventAdd", "\320\224\320\260\321\202\320\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("eventAdd", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\276\320\265 \320\222\321\200\320\265\320\274\321\217", Q_NULLPTR));
        label_3->setText(QApplication::translate("eventAdd", "\320\232\320\276\320\275\320\265\321\207\320\275\320\276\320\265 \320\222\321\200\320\265\320\274\321\217", Q_NULLPTR));
        label_4->setText(QApplication::translate("eventAdd", "\320\241\320\276\320\261\321\213\321\202\320\270\320\265", Q_NULLPTR));
        label_5->setText(QApplication::translate("eventAdd", "\320\241\321\202\320\260\321\202\321\203\321\201", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("eventAdd", "\320\227\320\260\320\272\320\276\320\275\321\207\320\265\320\275\320\276/\320\227\320\260\320\262\320\265\321\200\321\210\320\265\320\275\320\276", Q_NULLPTR)
         << QApplication::translate("eventAdd", "\320\222 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\265", Q_NULLPTR)
         << QApplication::translate("eventAdd", "\320\235\320\265 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\276", Q_NULLPTR)
         << QApplication::translate("eventAdd", "\320\235\320\265 \320\275\320\260\321\207\320\260\321\202\320\276", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class eventAdd: public Ui_eventAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTADD_H
