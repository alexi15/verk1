#include "ComputerData.h"

ComputerData::ComputerData()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName = "Computers.sqlite";
    db.setDatabaseName(dbName);
    db.open();


}


bool ComputerData::IsOpen()const
{

    return db.isOpen();

}


void ComputerData::ComputerToVector()
{

    QSqlQuery query(db);

    query.exec("SELECT * FROM Computers");

    while(query.next()){
        int ID = query.value("ID").toUInt();
        string name = query.value("Name").toString().toStdString();
        int BuildYear = query.value("BuildYear").toUInt();
        string Type = query.value("Type").toString().toStdString();
        string made = query.value("Made").toString().toStdString();
        Computer P(ID, name,BuildYear,Type,made);
        computers.push_back(P);
    }
}


bool ComputerData::AddComputer(Computer add)
{

    bool Added = false;

    QSqlQuery Insert;

    Insert.prepare("INSERT INTO computers (id, Name, BuildYear, Type, Made) VALUES (:id,:Name, :Build Year,"
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


vector<Computer> ComputerData::getComVector()
{
    return computers;
}
