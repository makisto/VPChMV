#ifndef SDIPROGRAM_VETR_MART_H
#define SDIPROGRAM_VETR_MART_H

#include <QMainWindow>
#include <QtWidgets>
#include <QColorDialog>
#include "docwindow_vetr_mart.h"
#include "sdiprogram_vetr_mart.h"

namespace Ui
{
    class SDIProgram_Vetr_Mart;
}

class SDIProgram_Vetr_Mart : public QMainWindow
{
    Q_OBJECT

public:
    docwindow_Vetr_Mart *pdoc = new docwindow_Vetr_Mart;
    SDIProgram_Vetr_Mart(QWidget *pwgt = 0) : QMainWindow(pwgt)
    {
        QMenu *pmnuFile = new QMenu("&File");
        QMenu *pmnuHelp = new QMenu("&Help");
        pmnuFile->addAction("&Open", pdoc, SLOT(slotLoad()), QKeySequence("CTRL+O"));
        pmnuFile->addAction("&Color", pdoc, SLOT(slotColor()), QKeySequence("CTRL+Y"));
        pmnuFile->addAction("&Save", pdoc, SLOT(slotSave()), QKeySequence("CTRL+S"));
        pmnuFile->addAction("&SaveAs", pdoc, SLOT(slotSaveAs()), QKeySequence("CTRL+P"));
        pmnuFile->addAction("&Quit", qApp, SLOT(quit()), QKeySequence("CTRL+N"));
        pmnuHelp->addAction("&Help", this, SLOT(slotAbout()), Qt::Key_F1);
        menuBar()->addMenu(pmnuFile);
        menuBar()->addMenu(pmnuHelp);
        setCentralWidget(pdoc);
        connect(pdoc, SIGNAL(changeWindowTitle(const QString&)), SLOT(slotChangeWindowTitle(const QString&)));
        statusBar()->showMessage("Ready", 2000);
    }
public slots:
    void slotAbout()
    {
        QMessageBox::about(this, "Application", "Ветринский\nМартасов\nИП-711");
    }
    void slotChangeWindowTitle(const QString& str)
    {
        setWindowTitle(str);
    }
private:
    Ui::SDIProgram_Vetr_Mart *ui;
};

#endif // SDIPROGRAM_VETR_MART_H
