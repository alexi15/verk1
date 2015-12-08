
#include "ComputerData.h"


ComputerData::ComputerData()
{

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

    Insert.prepare("INSERT INTO computers (Name, BuildYear, Type, Made) VALUES (:Name, :BuildYear,"
                   ":Type,:Made)");


    Insert.bindValue(":Name",add.getName().c_str());
    Insert.bindValue(":BuildYear",add.getBuildYear());
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

bool ComputerData::remove(int Id)
{
    bool Success = false;
    QSqlQuery query(db);
    query.prepare("DELETE FROM computer WHERE Id = :Id");
    query.bindValue(":Id", Id);
    query.exec();

    if(query.exec())
    {
        Success = true;
    }
    return Success;
}


vector<int> ComputerData::getComRelation(int comID)
{
    QSqlQuery query(db);

    cout << endl << comID << endl;

    query.prepare("SELECT scientist_id FROM relations WHERE computer_id = :input" );
    query.bindValue(":input",comID);
    query.exec();


    vector<int> tempVec;

    while(query.next()){
        tempVec.push_back(query.value("scientist_id").toUInt());
        /*int ID = query.value("ID").toUInt();
        string name = query.value("Name").toString().toStdString();
        string LastName = query.value("LastName").toString().toStdString();
        string Gender = query.value("Gender").toString().toStdString();
        int Born = query.value("YearBorn").toUInt();
        int Died = query.value("Death").toUInt();
        Scientist P(ID, name,LastName,Gender,Born,Died);
        scientist.push_back(P);*/
    }
    return tempVec;
}


