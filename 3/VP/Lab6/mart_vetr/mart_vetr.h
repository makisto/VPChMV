#ifndef MART_VETR_H
#define MART_VETR_H

#include <QWidget>
#include <QAbstractButton>

namespace Ui {
class mart_vetr;
}

class mart_vetr : public QWidget
{
    Q_OBJECT

public:
    explicit mart_vetr(QWidget *parent = 0);
    ~mart_vetr();

private:
    Ui::mart_vetr *ui;
public slots:
    void recieveData(QString str);
private slots:
    void on_buttonBox_clicked(QAbstractButton *button);
};

#endif // MART_VETR_H
