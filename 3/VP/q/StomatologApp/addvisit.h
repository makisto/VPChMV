#ifndef ADDVISIT_H
#define ADDVISIT_H

#include <QMainWindow>
#include <QCloseEvent>
#include <QMessageBox>
#include "constants.h"
#include "servicelistwindow.h"

namespace Ui {
class AddVisit;
}

class AddVisit : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddVisit(QWidget *parent = nullptr);
    ~AddVisit();

signals:
    void sendList(QList<int>);
private slots:
    void closeEvent(QCloseEvent *event);
    void loadClients();
    void on_serviceButton_clicked();

    void on_visitAdd_clicked();

public slots:
    void recieveData(QList<int>);
private:
    Ui::AddVisit *ui;
    QSqlDatabase db;
    QString stri;
    QList<int> serviceIds;
};

#endif // ADDVISIT_H
