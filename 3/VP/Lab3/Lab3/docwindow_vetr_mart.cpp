#include "docwindow_vetr_mart.h"

#include <QColorDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>

docwindow_Vetr_Mart::docwindow_Vetr_Mart(QWidget *pwgt) : QTextEdit(pwgt)
{

}

void docwindow_Vetr_Mart::slotLoad()
{
    QString str = QFileDialog::getOpenFileName();
    if(str.isEmpty())
    {
        return;
    }

    QFile file(str);
    if(file.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&file);
        setPlainText(stream.readAll());
        file.close();

        m_strFileName = str;
        emit changeWindowTitle(m_strFileName);
    }
}

void docwindow_Vetr_Mart::slotSaveAs()
{
    QString str = QFileDialog::getSaveFileName(0, m_strFileName);
    if(!str.isEmpty())
    {
        m_strFileName = str;
        slotSave();
    }
}

void docwindow_Vetr_Mart::slotSave()
{
    if(m_strFileName.isEmpty())
    {
        slotSaveAs();
        return;
    }
    QFile file(m_strFileName);
    if(file.open(QIODevice::WriteOnly))
    {
        QTextStream(&file)<<toPlainText();
        file.close();
        emit changeWindowTitle(m_strFileName);
    }
    QMessageBox::information(0, "Инфа", "Сохранение прошло успешно!");
}

void docwindow_Vetr_Mart::slotColor()
{
    QColor color = QColorDialog::getColor(Qt::black, this);
    setTextColor(color);
}
