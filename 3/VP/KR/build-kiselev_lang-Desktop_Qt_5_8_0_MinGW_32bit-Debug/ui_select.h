/********************************************************************************
** Form generated from reading UI file 'select.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECT_H
#define UI_SELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_select
{
public:
    QLabel *label_2;
    QFrame *line_4;
    QRadioButton *Box_Man;
    QFrame *line_2;
    QRadioButton *Box_PP;
    QRadioButton *Box_Otch;
    QRadioButton *Box_Futbolki;
    QRadioButton *Box_Kat;
    QRadioButton *Box_Child;
    QRadioButton *Box_Ubki;
    QLabel *label_3;
    QFrame *line_3;
    QRadioButton *Box_Fem;
    QRadioButton *Box_Galstuki;
    QRadioButton *Box_Sport;
    QRadioButton *Box_Rubashki;
    QRadioButton *Box_Vzr;
    QFrame *line;
    QRadioButton *Box_Djinsi;
    QRadioButton *Box_Noski;
    QLabel *label;
    QFrame *line_5;
    QPushButton *OK;
    QPushButton *Cancel;

    void setupUi(QWidget *select)
    {
        if (select->objectName().isEmpty())
            select->setObjectName(QStringLiteral("select"));
        select->resize(701, 478);
        label_2 = new QLabel(select);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 150, 351, 51));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        line_4 = new QFrame(select);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(0, 330, 351, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        Box_Man = new QRadioButton(select);
        Box_Man->setObjectName(QStringLiteral("Box_Man"));
        Box_Man->setGeometry(QRect(10, 210, 321, 17));
        QFont font1;
        font1.setPointSize(12);
        Box_Man->setFont(font1);
        line_2 = new QFrame(select);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(-10, 140, 711, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        Box_PP = new QRadioButton(select);
        Box_PP->setObjectName(QStringLiteral("Box_PP"));
        Box_PP->setGeometry(QRect(10, 360, 321, 17));
        Box_PP->setFont(font1);
        Box_Otch = new QRadioButton(select);
        Box_Otch->setObjectName(QStringLiteral("Box_Otch"));
        Box_Otch->setGeometry(QRect(380, 90, 311, 51));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setWeight(50);
        Box_Otch->setFont(font2);
        Box_Futbolki = new QRadioButton(select);
        Box_Futbolki->setObjectName(QStringLiteral("Box_Futbolki"));
        Box_Futbolki->setGeometry(QRect(370, 360, 311, 17));
        Box_Futbolki->setFont(font1);
        Box_Kat = new QRadioButton(select);
        Box_Kat->setObjectName(QStringLiteral("Box_Kat"));
        Box_Kat->setGeometry(QRect(20, 90, 321, 51));
        Box_Kat->setFont(font2);
        Box_Kat->setIconSize(QSize(16, 16));
        Box_Child = new QRadioButton(select);
        Box_Child->setObjectName(QStringLiteral("Box_Child"));
        Box_Child->setGeometry(QRect(10, 270, 321, 17));
        Box_Child->setFont(font1);
        Box_Ubki = new QRadioButton(select);
        Box_Ubki->setObjectName(QStringLiteral("Box_Ubki"));
        Box_Ubki->setGeometry(QRect(370, 390, 311, 17));
        Box_Ubki->setFont(font1);
        label_3 = new QLabel(select);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(356, 152, 341, 51));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        line_3 = new QFrame(select);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(340, 80, 20, 341));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        Box_Fem = new QRadioButton(select);
        Box_Fem->setObjectName(QStringLiteral("Box_Fem"));
        Box_Fem->setGeometry(QRect(10, 240, 321, 17));
        Box_Fem->setFont(font1);
        Box_Galstuki = new QRadioButton(select);
        Box_Galstuki->setObjectName(QStringLiteral("Box_Galstuki"));
        Box_Galstuki->setGeometry(QRect(370, 210, 311, 17));
        Box_Galstuki->setFont(font1);
        Box_Sport = new QRadioButton(select);
        Box_Sport->setObjectName(QStringLiteral("Box_Sport"));
        Box_Sport->setGeometry(QRect(370, 330, 311, 17));
        Box_Sport->setFont(font1);
        Box_Rubashki = new QRadioButton(select);
        Box_Rubashki->setObjectName(QStringLiteral("Box_Rubashki"));
        Box_Rubashki->setGeometry(QRect(370, 300, 311, 17));
        Box_Rubashki->setFont(font1);
        Box_Vzr = new QRadioButton(select);
        Box_Vzr->setObjectName(QStringLiteral("Box_Vzr"));
        Box_Vzr->setGeometry(QRect(10, 300, 321, 17));
        Box_Vzr->setFont(font1);
        line = new QFrame(select);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 70, 701, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        Box_Djinsi = new QRadioButton(select);
        Box_Djinsi->setObjectName(QStringLiteral("Box_Djinsi"));
        Box_Djinsi->setGeometry(QRect(370, 240, 311, 17));
        Box_Djinsi->setFont(font1);
        Box_Noski = new QRadioButton(select);
        Box_Noski->setObjectName(QStringLiteral("Box_Noski"));
        Box_Noski->setGeometry(QRect(370, 270, 311, 17));
        Box_Noski->setFont(font1);
        label = new QLabel(select);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 701, 71));
        QFont font3;
        font3.setPointSize(28);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);
        line_5 = new QFrame(select);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(0, 410, 701, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        OK = new QPushButton(select);
        OK->setObjectName(QStringLiteral("OK"));
        OK->setGeometry(QRect(210, 430, 131, 41));
        Cancel = new QPushButton(select);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setGeometry(QRect(360, 430, 131, 41));

        retranslateUi(select);

        QMetaObject::connectSlotsByName(select);
    } // setupUi

    void retranslateUi(QWidget *select)
    {
        select->setWindowTitle(QApplication::translate("select", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("select", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\320\270", Q_NULLPTR));
        Box_Man->setText(QApplication::translate("select", "\320\234\321\203\320\266\321\201\320\272\320\260\321\217 \320\276\320\264\320\265\320\266\320\264\320\260", Q_NULLPTR));
        Box_PP->setText(QApplication::translate("select", "\320\236\320\264\320\270\320\275 \320\277\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272 \320\270 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214", Q_NULLPTR));
        Box_Otch->setText(QApplication::translate("select", "\320\236\321\202\321\207\321\221\321\202 \321\201\320\276 \321\201\320\272\320\273\320\260\320\264\320\260", Q_NULLPTR));
        Box_Futbolki->setText(QApplication::translate("select", "\320\244\321\203\321\202\320\261\320\276\320\273\320\272\320\270", Q_NULLPTR));
        Box_Kat->setText(QApplication::translate("select", "\320\222\321\201\320\265 \321\202\320\276\320\262\320\260\321\200\321\213 (\320\272\320\260\321\202\320\260\320\273\320\276\320\263)", Q_NULLPTR));
        Box_Child->setText(QApplication::translate("select", "\320\236\320\264\320\265\320\266\320\264\320\260 \320\264\320\273\321\217 \320\264\320\265\321\202\320\265\320\271", Q_NULLPTR));
        Box_Ubki->setText(QApplication::translate("select", "\320\256\320\261\320\272\320\270", Q_NULLPTR));
        label_3->setText(QApplication::translate("select", "\320\242\320\270\320\277 \320\276\320\264\320\265\320\266\320\264\321\213", Q_NULLPTR));
        Box_Fem->setText(QApplication::translate("select", "\320\226\320\265\320\275\321\201\320\272\320\260\321\217 \320\276\320\264\320\265\320\266\320\264\320\260", Q_NULLPTR));
        Box_Galstuki->setText(QApplication::translate("select", "\320\223\320\260\320\273\321\201\321\202\321\203\320\272\320\270", Q_NULLPTR));
        Box_Sport->setText(QApplication::translate("select", "\320\241\320\277\320\276\321\200\321\202\320\270\320\262\320\275\320\276\320\265", Q_NULLPTR));
        Box_Rubashki->setText(QApplication::translate("select", "\320\240\321\203\320\261\320\260\321\210\320\272\320\270", Q_NULLPTR));
        Box_Vzr->setText(QApplication::translate("select", "\320\236\320\264\320\265\320\266\320\264\320\260 \320\264\320\273\321\217 \320\262\320\267\321\200\320\276\321\201\320\273\321\213\321\205", Q_NULLPTR));
        Box_Djinsi->setText(QApplication::translate("select", "\320\224\320\266\320\270\320\275\321\201\321\213", Q_NULLPTR));
        Box_Noski->setText(QApplication::translate("select", "\320\235\320\276\321\201\320\272\320\270", Q_NULLPTR));
        label->setText(QApplication::translate("select", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\202\320\270\320\277 \320\264\320\260\320\275\320\275\321\213\321\205", Q_NULLPTR));
        OK->setText(QApplication::translate("select", "OK", Q_NULLPTR));
        Cancel->setText(QApplication::translate("select", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class select: public Ui_select {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECT_H
