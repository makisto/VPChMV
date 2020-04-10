#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <QObject>
#include <QtSql>
#include "QSqlQuery"
#include "QtSql/QSqlDatabase"

class Constants
{
public:
    static void DBInit(QSqlDatabase &db)
    {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("C:\\Users\\ilja-\\Downloads\\q\\StomatologApp\\StomatologDB.db");
    }
};
#endif // CONSTANTS_H
