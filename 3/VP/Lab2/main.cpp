#include "startdialog_vetrinskiy_martasov.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StartDialog_Vetrinskiy_Martasov startDialog;
    startDialog.show();

    return a.exec();
}
