#ifndef FORMINFO_H
#define FORMINFO_H

#include <QWidget>

namespace Ui {
class FormInfo;
}

class FormInfo : public QWidget
{
    Q_OBJECT

public:
    explicit FormInfo(QWidget *parent = 0);
    ~FormInfo();

private:
    Ui::FormInfo *ui;
};

#endif // FORMINFO_H
