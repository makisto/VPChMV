#include "visitwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
#include <QIcon>
#include<QMainWindow>
//#include <forminfo.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pixmap("C:\\Users\\Dasha\\Desktop\\q\\StomatologApp\\icons\\splash.jpg");
    QSplashScreen splash(pixmap, Qt::WindowStaysOnTopHint);
    splash.show();
    QTimer::singleShot(300,  &splash, SLOT(close()));
    VisitWindow w;
    w.show();
   /* FormInfo helpBrowser("help","help.html");
    helpBrowser.resize(400,300);
    helpBrowser.show();*/

    return a.exec();
}
