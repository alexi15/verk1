#include "ScientistData.h"



ScientistData::ScientistData()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName = "Computers.sqlite";
    db.setDatabaseName(dbName);
    db.open();

}

bool ScientistData::IsOpen()const
{

    return db.isOpen();

}

void ScientistData::ScientistToVector()
{

    QSqlQuery query(db);

    query.exec("SELECT * FROM Scientist");

    while(query.next()){
        int ID = query.value("ID").toUInt();
        string name = query.value("Name").toString().toStdString();
        string LastName = query.value("LastName").toString().toStdString();
        string Gender = query.value("Gender").toString().toStdString();
        int Born = query.value("YearBorn").toUInt();
        int Died = query.value("Death").toUInt();
        Scientist P(ID, name,LastName,Gender,Born,Died);
        scientist.push_back(P);
    }


}

bool ScientistData::AddScientist(Scientist add)
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



vector<Scientist> ScientistData::getSciVector()
{
    return scientist;
}

