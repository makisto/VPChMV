/********************************************************************************
** Form generated from reading UI file 'auth.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTH_H
#define UI_AUTH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_auth
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QTextEdit *textEdit;

    void setupUi(QDialog *auth)
    {
        if (auth->objectName().isEmpty())
            auth->setObjectName(QStringLiteral("auth"));
        auth->resize(400, 311);
        buttonBox = new QDialogButtonBox(auth);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(auth);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(16, 12, 371, 201));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../0_8eb56_842bba74_XL-640x400.jpg")));
        textEdit = new QTextEdit(auth);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 220, 201, 81));

        retranslateUi(auth);
        QObject::connect(buttonBox, SIGNAL(accepted()), auth, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), auth, SLOT(reject()));

        QMetaObject::connectSlotsByName(auth);
    } // setupUi

    void retranslateUi(QDialog *auth)
    {
        auth->setWindowTitle(QApplication::translate("auth", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276\320\261 \320\260\320\262\321\202\320\276\321\200\320\260\321\205", nullptr));
        label->setText(QString());
        textEdit->setHtml(QApplication::translate("auth", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241\320\276\320\267\320\264\320\260\321\202\320\265\320\273\320\270:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\222\320\265\321\202\321\200\320\270\320\275\321\201\320\272\320\270\320\271 \320\235\320\270\320\272\320\270\321\202\320\260</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\234\320\260\321\200\321\202\320\260\321\201\320\276\320\262 \320\230\320\273\321\214\321\217<"
                        "/p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\223\321\200\321\203\320\277\320\277\320\260 \320\230\320\237-711</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class auth: public Ui_auth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTH_H
