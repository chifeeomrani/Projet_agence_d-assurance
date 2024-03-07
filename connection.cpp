#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{
    bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("assurance");
db.setUserName("system");
db.setPassword("221JFT0027");
if (db.open())
test=true;

    return  test;
}
