#ifndef ADDCLIENTWINDOW_H
#define ADDCLIENTWINDOW_H

#include <QMainWindow>
#include <QCloseEvent>
#include <QMessageBox>
#include "constants.h"

namespace Ui {
class AddClientWindow;
}

class AddClientWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddClientWindow(QWidget *parent = nullptr);
    ~AddClientWindow();

private slots:
    void on_pushButton_clicked();
    void closeEvent(QCloseEvent *event);

private:
    Ui::AddClientWindow *ui;
    QSqlDatabase db;
};

#endif // ADDCLIENTWINDOW_H
