#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
#include <QIcon>
#include <QMainWindow>
#include <QTextBrowser>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pixmap(":/1.png");
    QSplashScreen splash(pixmap, Qt::WindowStaysOnTopHint);
    splash.show();
    QTimer::singleShot(300,  &splash, SLOT(close()));
    /*QFile styleF;
    styleF.setFileName(":/qss/style.css");
    styleF.open(QFile::ReadOnly);
    QString qssStr = styleF.readAll();
    qApp->setStyleSheet(qssStr);*/

    MainWindow w;
    w.setStyleSheet("w {color: (25,25,25);}"
                    "QPushButton { background-color: (25,25,100);"
                    "padding:4px;color:(25,25,25);font-size: 14px;"
                    "border-radius: 4px;border: 1px solid #3873d9;"
                    "}"
                    "MessageBox {border-radius: 4px;border: 1px solid #2772f9;}"
                    "TableView {border-radius: 4px;border: 1px solid #2772f9;}");
    w.show();
    return a.exec();
}
