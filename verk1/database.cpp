#include "database.h"



Database::Database()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName = "Scientist_db.sqlite";
    db.setDatabaseName(dbName);

}

bool Database::IsOpen()const
{

    return db.isOpen();

}

void Database::ScientistToVector()
{

    QSqlQuery query(db);

    query.exec("SELECT * FROM Scientist");

    while(query.next()){
        string name = query.value("Name").toString().toStdString();
        string LastName = query.value("Last Name").toString().toStdString();
        string Gender = query.value("Gender").toString().toStdString();
        int Born = query.value("Year Born").toUInt();
        int Died = query.value("Died").toUInt();
        Scientist P(name,LastName,Gender,Born,Died);
        scientist.push_back(P);
    }
}


void Database::ComputerToVector()
{

    QSqlQuery query(db);

    query.exec("SELECT * FROM Computers");

    while(query.next()){
        string name = query.value("Name").toString().toStdString();
        int BuildYear = query.value("Build Year").toUInt();
        string Type = query.value("Type").toString().toStdString();
        string made = query.value("Made").toString().toStdString();
        Computers P(name,BuildYear,Type,made);
        computers.push_back(P);
    }
}


