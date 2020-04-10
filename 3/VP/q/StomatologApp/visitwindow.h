#ifndef VISITWINDOW_H
#define VISITWINDOW_H

#include <QMainWindow>
#include "QStandardItemModel"
#include "QStandardItem"
#include <QCloseEvent>
#include "constants.h"
#include "addvisit.h"
#include "addclientwindow.h"
#include <QMessageBox>
#include <QDateTime>
#include "addserviceform.h"
#include "forminfo.h"

namespace Ui {
class VisitWindow;
}

class VisitWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit VisitWindow(QWidget *parent = nullptr);
    ~VisitWindow();
private slots:
    void LoadClients();
    void LoadVisits();
    void LoadServices();
    void SetStyles();
    void closeEvent(QCloseEvent *event);
    void on_addVisit_clicked();
    void on_pushButton_4_clicked();

    void on_visitUpdate_clicked();

    void on_clientUpdate_clicked();

    void on_serviceUpdate_clicked();

    void on_clientDelete_clicked();

    void on_serviceDelete_clicked();

    void on_serviceAdd_clicked();

    void on_visitDelete_clicked();

    void on_Help_clicked();

    void on_ot_clicked();

    void on_choiceot_clicked();


private:
    Ui::VisitWindow *ui;
    QSqlDatabase db;
};

#endif // VISITWINDOW_H
