#ifndef ADDEVENT_H
#define ADDEVENT_H

#include <QWidget>
#include "mainwindow.h"
#include "database.h"

namespace Ui {
class addEvent;
}

class addEvent : public QWidget
{
    Q_OBJECT

public:
    explicit addEvent(QWidget *parent = 0);
    ~addEvent();
    void letIndex(QModelIndexList index);
signals:
    void doIt();

private slots:
    void closeEvent(QCloseEvent* event);
    void on_pushButton_clicked();


private:
    QModelIndexList index;
    Ui::addEvent *ui;
};

#endif // ADDEVENT_H
