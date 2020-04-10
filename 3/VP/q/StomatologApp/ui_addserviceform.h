/********************************************************************************
** Form generated from reading UI file 'addserviceform.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSERVICEFORM_H
#define UI_ADDSERVICEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddServiceForm
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_8;
    QLineEdit *textName;
    QLabel *label_9;
    QLineEdit *textPrice;
    QPushButton *addButton;

    void setupUi(QWidget *AddServiceForm)
    {
        if (AddServiceForm->objectName().isEmpty())
            AddServiceForm->setObjectName(QStringLiteral("AddServiceForm"));
        AddServiceForm->resize(232, 105);
        formLayoutWidget = new QWidget(AddServiceForm);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 211, 51));
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

        textName = new QLineEdit(formLayoutWidget);
        textName->setObjectName(QStringLiteral("textName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, textName);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_9);

        textPrice = new QLineEdit(formLayoutWidget);
        textPrice->setObjectName(QStringLiteral("textPrice"));

        formLayout->setWidget(1, QFormLayout::FieldRole, textPrice);

        addButton = new QPushButton(AddServiceForm);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(10, 70, 211, 23));
        addButton->setStyleSheet(QStringLiteral("background-color:#48FFD5"));

        retranslateUi(AddServiceForm);

        QMetaObject::connectSlotsByName(AddServiceForm);
    } // setupUi

    void retranslateUi(QWidget *AddServiceForm)
    {
        AddServiceForm->setWindowTitle(QApplication::translate("AddServiceForm", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\203\321\201\320\273\321\203\320\263\321\203", 0));
        label_8->setText(QApplication::translate("AddServiceForm", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", 0));
        label_9->setText(QApplication::translate("AddServiceForm", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214", 0));
        addButton->setText(QApplication::translate("AddServiceForm", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class AddServiceForm: public Ui_AddServiceForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSERVICEFORM_H
