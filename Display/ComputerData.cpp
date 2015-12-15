#include "ComputerData.h"

//Default constructor
ComputerData::ComputerData()
{

}

//This function checks if the database is open
bool ComputerData::IsOpen()const
{
    return db.isOpen();
}

//This function loads the computers data from database into a vector
void ComputerData::ComputerToVector()
{

    QSqlQuery query(db);

    query.exec("SELECT * FROM Computers");

    while(query.next())
    {
        int ID = query.value("ID").toUInt();
        string name = query.value("Name").toString().toStdString();
        int BuildYear = query.value("BuildYear").toUInt();
        string Type = query.value("Type").toString().toStdString();
        string made = query.value("Made").toString().toStdString();
        Computer P(ID, name,BuildYear,Type,made);
        computers.push_back(P);
    }
}

//This function add computer data to the database
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
    computers.clear();
    return Added;

}

//This functions gets vector from database
vector<Computer> ComputerData::getComVector()
{
    return computers;
}

//This function remove computer data from the database
bool ComputerData::remove(int Id)
{
    bool Success = false;
    QSqlQuery query(db);
    query.prepare("DELETE FROM computers WHERE Id = :Id");
    query.bindValue(":Id", Id);
    query.exec();
    if(query.exec())
    {
        Success = true;
    }
    computers.clear();
    return Success;
}

//This function gets computers relation information from the database
vector<int> ComputerData::getComRelation(int comID)
{
    QSqlQuery query(db);

    query.prepare("SELECT scientist_id FROM relations WHERE computer_id = :input" );
    query.bindValue(":input",comID);
    query.exec();

    vector<int> tempVec;

    while(query.next())
    {
        tempVec.push_back(query.value("scientist_id").toUInt());
    }
    return tempVec;
}

//This function add relation to the database
bool ComputerData::addRelation(int comID, int sciID)
{
    bool Added = false;

    QSqlQuery Insert(db);

    Insert.prepare("INSERT INTO relations VALUES (:com, :sci)");

    Insert.bindValue(":com",comID);
    Insert.bindValue(":sci",sciID);

    if (Insert.exec())
    {
        Added = true;
    }
    return Added;
}

//This function removes relation from the database
bool ComputerData::removeRelation(int comID, int sciID)
{
    bool removed = false;

    QSqlQuery query(db);

    query.prepare("DELETE FROM relations WHERE computer_id = :com "
                  "and scientist_ID = :sci");

    query.bindValue(":com",comID);
    query.bindValue(":sci",sciID);

    if(query.exec())
    {
        removed = true;
    }
    return removed;
}

//This function edit relation to the database
bool ComputerData::Edit(string toedit, int tala, int inputEdit)
{
    int intedit = 0;
    if(isdigit(toedit[1]) == 1)
    {
        std::stringstream ss(toedit);
        ss >> intedit;
    }


    bool Success = false;
    QSqlQuery query(db);

    switch(inputEdit)
    {
        case 1:
            query.prepare("UPDATE Computers SET name = :Name WHERE id = :Id");
            query.bindValue(":Id",tala);
            query.bindValue(":Name", toedit.c_str());
            if(query.exec())
                Success = true;
            break;
        case 2:
            if(intedit == 0)
                return false;
            query.prepare("UPDATE Computers SET buildyear = :BuildYear WHERE id = :Id");
            query.bindValue(":Id",tala);
            query.bindValue(":BuildYear", intedit);
            if(query.exec())
                Success = true;
            break;
        case 3:
            query.prepare("UPDATE Computers SET type = :Type WHERE id = :Id");
            query.bindValue(":Id",tala);
            query.bindValue(":Type", toedit.c_str());
            if(query.exec())
                Success = true;
            break;
        case 4:
            if(toedit != "Yes" && toedit != "yes" && toedit != "no" && toedit != "No")
                return false;
            query.prepare("UPDATE Computers SET made = :Made WHERE id = :Id");
            query.bindValue(":Id",tala);
            query.bindValue(":Made", toedit.c_str());
            if(query.exec())
                Success = true;
            break;
    }
    computers.clear();
    return Success;
}

void ComputerData::removeRelationsFromID(int ID)
{
    QSqlQuery query(db);

    query.prepare("DELETE FROM relations WHERE computer_id = :com");

    query.bindValue(":com",ID);

    query.exec();
}
