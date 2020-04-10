#ifndef EVENTADD_H
#define EVENTADD_H

#include <QWidget>
#include <QDate>
#include "mainwindow.h"
#include "database.h"

namespace Ui {
class eventAdd;
}

class eventAdd : public QWidget
{
    Q_OBJECT

public:
    explicit eventAdd(QWidget *parent = 0);
    ~eventAdd();
signals:
    void doIt();

private slots:
    void closeEvent(QCloseEvent* event);
    void on_pushButton_clicked();
    void add();
private:
    Ui::eventAdd *ui;
};

#endif // EVENTADD_H
