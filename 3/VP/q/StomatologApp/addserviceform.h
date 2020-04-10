#ifndef ADDSERVICEFORM_H
#define ADDSERVICEFORM_H

#include <QMainWindow>
#include <QCloseEvent>
#include <QMessageBox>
#include "constants.h"

namespace Ui {
class AddServiceForm;
}

class AddServiceForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddServiceForm(QWidget *parent = nullptr);
    ~AddServiceForm();
    void closeEvent(QCloseEvent *event);

private slots:
    void on_addButton_clicked();

private:
    Ui::AddServiceForm *ui;
    QSqlDatabase db;
};

#endif // ADDSERVICEFORM_H
