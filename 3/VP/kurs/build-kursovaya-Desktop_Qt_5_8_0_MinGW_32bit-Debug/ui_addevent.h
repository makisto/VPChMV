/********************************************************************************
** Form generated from reading UI file 'addevent.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEVENT_H
#define UI_ADDEVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addEvent
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QPushButton *pushButton;

    void setupUi(QWidget *addEvent)
    {
        if (addEvent->objectName().isEmpty())
            addEvent->setObjectName(QStringLiteral("addEvent"));
        addEvent->resize(229, 103);
        label = new QLabel(addEvent);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 10, 40, 16));
        layoutWidget = new QWidget(addEvent);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 211, 51));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(addEvent);

        QMetaObject::connectSlotsByName(addEvent);
    } // setupUi

    void retranslateUi(QWidget *addEvent)
    {
        addEvent->setWindowTitle(QApplication::translate("addEvent", "\320\241\321\202\320\260\321\202\321\203\321\201", Q_NULLPTR));
        label->setText(QApplication::translate("addEvent", "\320\241\321\202\320\260\321\202\321\203\321\201:", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("addEvent", "\320\227\320\260\320\272\320\276\320\275\321\207\320\265\320\275\320\276/\320\227\320\260\320\262\320\265\321\200\321\210\320\265\320\275\320\276", Q_NULLPTR)
         << QApplication::translate("addEvent", "\320\222 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\265", Q_NULLPTR)
         << QApplication::translate("addEvent", "\320\235\320\265 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\276", Q_NULLPTR)
         << QApplication::translate("addEvent", "\320\235\320\265 \320\275\320\260\321\207\320\260\321\202\320\276", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("addEvent", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addEvent: public Ui_addEvent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEVENT_H
