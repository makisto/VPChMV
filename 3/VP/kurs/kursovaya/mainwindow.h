#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QCloseEvent>
#include "forminfo.h"
#include "database.h"
#include "addevent.h"
#include "eventadd.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QModelIndexList index25;

private:
    Ui::MainWindow  *ui;
    DataBase        *db;
    QSqlTableModel  *model;

private slots:
    void setupModel(const QString &tableName, const QStringList &headers);
    void createUI();
    void closeEvent(QCloseEvent* event);
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void setStyles();
};

#endif // MAINWINDOW_H
