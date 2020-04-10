#ifndef SERVICELISTWINDOW_H
#define SERVICELISTWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "constants.h"

namespace Ui {
class ServiceListWindow;
}

class ServiceListWindow : public QMainWindow
{
    Q_OBJECT

private slots:
    void on_saveButton_clicked();
    void loadServices();
    void on_addButton_clicked();
    void loadTable();
    void on_deleteButton_clicked();

public slots:
    void recieveList(QList<int>);
public:
    explicit ServiceListWindow(QWidget *parent = nullptr);
    ~ServiceListWindow();
signals:
    void sendData(QList<int>);
private:
    Ui::ServiceListWindow *ui;
    QSqlDatabase db;
    QList<int> serviceIds;
};

#endif // SERVICELISTWINDOW_H
