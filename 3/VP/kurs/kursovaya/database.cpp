#include "database.h"

DataBase::DataBase(QObject *parent) : QObject(parent)
{

}

DataBase::~DataBase()
{

}

/* Методы для подключения к базе данных
 * */
void DataBase::connectToDataBase()
{
    if(!QFile("C:/Users/ilja-/Downloads/VP/kurs" DATABASE_NAME).exists())
    {
        this->restoreDataBase();
    }
    else
    {
        this->openDataBase();
    }
}

/* Методы восстановления базы данных
 * */
bool DataBase::restoreDataBase()
{
    if(this->openDataBase())
    {
        if(!this->createTable())
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else
    {
        qDebug() << "Не удалось восстановить базу данных";
        return false;
    }
    return false;
}

/* Метод для открытия базы данных
 * */
bool DataBase::openDataBase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName(DATABASE_HOSTNAME);
    db.setDatabaseName("C:/Users/ilja-/Downloads/VP/kurs" DATABASE_NAME);
    if(db.open())
    {
        return true;
    }
    else
    {
        return false;
    }
}

/* Методы закрытия базы данных
 * */
void DataBase::closeDataBase()
{
    db.close();
}

/* Метод для создания таблицы в базе данных
 * */
bool DataBase::createTable()
{
    QSqlQuery query;
    if(!query.exec( "CREATE TABLE " TABLE " ("
                            "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                            TABLE_DATE       " DATE            NOT NULL,"
                            TABLE_BEGIN_TIME " TIME            NOT NULL,"
                            TABLE_END_TIME   " TIME            NOT NULL,"
                            TABLE_EVENT      " TEXT            NOT NULL,"
                            TABLE_STATUS     " TEXT            NOT NULL"
                        " )"
                    )){
        qDebug() << "DataBase: error of create " << TABLE;
        qDebug() << query.lastError().text();
        return false;
    }
    else
    {
        return true;
    }
    return false;
}

/* Метод для вставки записи в базу данных
 * */
bool DataBase::inserIntoTable(const QVariantList &data)
{
    QSqlQuery query;
    query.prepare("INSERT INTO " TABLE " ( " TABLE_DATE ", "
                                             TABLE_BEGIN_TIME ", "
                                             TABLE_END_TIME ", "
                                             TABLE_EVENT ", "
                                             TABLE_STATUS " ) "
                  "VALUES (:Date, :BeginTime, :EndTime, :Event, :Status )");
    query.bindValue(":Date",              data[0].toDate());
    query.bindValue(":BeginTime",         data[1].toTime());
    query.bindValue(":EndTime",           data[2].toTime());
    query.bindValue(":Event",             data[3].toString());
    query.bindValue(":Status",            data[4].toString());

    if(!query.exec())
    {
        qDebug() << "error insert into " << TABLE;
        qDebug() << query.lastError().text();
        return false;
    }
    else
    {
        return true;
    }
    return false;
}

