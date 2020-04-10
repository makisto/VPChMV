#ifndef DOCWINDOW_VETR_MART_H
#define DOCWINDOW_VETR_MART_H

#include <QTextEdit>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

class docwindow_Vetr_Mart : public QTextEdit
{
    Q_OBJECT
private:
    QString m_strFileName;
public:
    docwindow_Vetr_Mart(QWidget *pwgt = 0);
signals:
    void changeWindowTitle(const QString&);
public slots:
    void slotLoad();
    void slotSave();
    void slotSaveAs();
    void slotColor();
};

#endif // DOCWINDOW_VETR_MART_H
