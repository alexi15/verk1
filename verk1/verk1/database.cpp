#include "database.h"



Database::Database()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName = "Computers.sqlite";
    db.setDatabaseName(dbName);
    db.open();

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
        string LastName = query.value("LastName").toString().toStdString();
        string Gender = query.value("Gender").toString().toStdString();
        int Born = query.value("YearBorn").toUInt();
        int Died = query.value("Death").toUInt();
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
        int BuildYear = query.value("BuildYear").toUInt();
        string Type = query.value("Type").toString().toStdString();
        string made = query.value("Made").toString().toStdString();
        Computers P(name,BuildYear,Type,made);
        computers.push_back(P);
    }
}

bool Database::AddScientist(Scientist add)
{

    bool Added = false;

    QSqlQuery Insert;

    Insert.prepare("INSERT INTO Scientist (Name, LastName, Gender, YearBorn, Death) VALUES (:Name, :LastName,"
                   ":Gender, :YearBorn,:Death)");


    Insert.bindValue(":Name",add.getFirstName().c_str());
    Insert.bindValue(":LastName",add.getLastName().c_str());
    Insert.bindValue(":Gender",add.getSex().c_str());
    Insert.bindValue(":YearBorn",add.getYearBorn());
    Insert.bindValue(":Death",add.getYearDead());

    if (Insert.exec())
    {
        Added = true;
    }

    return Added;
}

bool Database::Addcomputers(Computers add)
{

    bool Added = false;

    QSqlQuery Insert;

    Insert.prepare("INSERT INTO Scientist (id, Name, Build Year, Type, Made) VALUES (:id,:Name, :Build Year,"
                   ":Type,:Made)");


    Insert.bindValue(":Name",add.getName().c_str());
    Insert.bindValue(":Build Year",add.getBuildYear());
    Insert.bindValue(":Type",add.getType().c_str());
    Insert.bindValue(":Made",add.getType().c_str());

    if (Insert.exec())
    {
        Added = true;
    }

    return Added;

}

vector<Scientist> Database::getSciVector()
{
    return scientist;
}

