#include "kiselev_lang.h"
#include "select.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    kiselev_lang w;
    w.show();
    return a.exec();
}
