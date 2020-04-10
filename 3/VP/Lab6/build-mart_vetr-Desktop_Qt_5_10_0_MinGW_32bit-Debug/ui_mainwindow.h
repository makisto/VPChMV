/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSplitter *splitter_2;
    QLabel *label_4;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QDateEdit *dateEdit;
    QSplitter *splitter;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLineEdit *lineEdit_4;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(678, 338);
        MainWindow->setStyleSheet(QLatin1String("font: 8pt \"MS Reference Sans Serif\";\n"
"background: rgb(105, 0, 0);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 150, 81, 31));
        pushButton->setStyleSheet(QLatin1String("border: 3px solid #007cFF;\n"
"background: #333333;\n"
"color: #FFF;"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 220, 75, 23));
        pushButton_2->setStyleSheet(QLatin1String("border: 3px solid #007cFF;\n"
"background: #333333;\n"
"color: #FFF;"));
        splitter_2 = new QSplitter(centralWidget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(10, 20, 651, 125));
        splitter_2->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(splitter_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(84, 125));
        label_4->setStyleSheet(QLatin1String("font: 8pt \"Vladimir Script\";\n"
"background:rgba(0, 0, 0, 120)"));
        label_4->setFrameShape(QFrame::Panel);
        splitter_2->addWidget(label_4);
        layoutWidget = new QWidget(splitter_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("text-decoration: underline;\n"
"color: white"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("color: white"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("color: white"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("color: white"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_3);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setStyleSheet(QStringLiteral("color: white"));

        formLayout->setWidget(2, QFormLayout::FieldRole, dateEdit);


        verticalLayout->addLayout(formLayout);

        splitter = new QSplitter(layoutWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        radioButton = new QRadioButton(splitter);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setStyleSheet(QStringLiteral("color: white"));
        splitter->addWidget(radioButton);
        radioButton_2 = new QRadioButton(splitter);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setStyleSheet(QStringLiteral("color: white"));
        splitter->addWidget(radioButton_2);
        lineEdit_4 = new QLineEdit(splitter);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        splitter->addWidget(lineEdit_4);

        verticalLayout->addWidget(splitter);

        splitter_2->addWidget(layoutWidget);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\223\320\276\321\202\320\276\320\262\320\276", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\244\320\276\321\202\320\276", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\244\320\230\320\236", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\320\233\321\216\320\261\320\270\320\274\320\276\320\265 \320\261\320\273\321\216\320\264\320\276", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "\320\274", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "\320\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
