#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QtSql>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>
#include <QFile>
#include <QDate>
#include <QDebug>

/* Директивы имен таблицы, полей таблицы и базы данных */
#define DATABASE_HOSTNAME   "Diary"
#define DATABASE_NAME       "basa.db"

#define TABLE                         "TableDiary"
#define TABLE_DATE                    "Date"
#define TABLE_BEGIN_TIME              "BeginTime"
#define TABLE_END_TIME                "EndTime"
#define TABLE_EVENT                   "Event"
#define TABLE_STATUS                  "Status"

class DataBase : public QObject
{
    Q_OBJECT
public:
    explicit DataBase(QObject *parent = 0);
    ~DataBase();
    /* Методы для непосредственной работы с классом
     * Подключение к базе данных и вставка записей в таблицу
     * */
    void connectToDataBase();
    bool inserIntoTable(const QVariantList &data);
    bool openDataBase();
    void closeDataBase();
private:
    // Сам объект базы данных, с которым будет производиться работа
    QSqlDatabase    db;

private slots:
    bool restoreDataBase();
    bool createTable();
};

#endif // DATABASE_H
