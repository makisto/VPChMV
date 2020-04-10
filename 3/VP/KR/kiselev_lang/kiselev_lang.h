#ifndef KISELEV_LANG_H
#define KISELEV_LANG_H

#include "select.h"

#include <QMainWindow>

namespace Ui {
class kiselev_lang;
}

class kiselev_lang : public QMainWindow
{
    Q_OBJECT

public:
    explicit kiselev_lang(QWidget *parent = 0);
    ~kiselev_lang();

private:
    Ui::kiselev_lang *ui;
    kiselev_lang *kl;
    select *iselect;
    //add *add;
    //change * change;

private slots:
    void slotButtonClicked();
    void slotSelect(int flag);
    void slotAdd();
    void slotChange();
};

#endif // KISELEV_LANG_H
