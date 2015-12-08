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
bool ScientistData::Edit(string toedit, int tala, int inputEdit)
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
        query.prepare("UPDATE Scientist SET name = :Name WHERE id = :Id");
        query.bindValue(":Id",tala);
        query.bindValue(":Name", toedit.c_str());
        if(query.exec())
            Success = true;
        break;
    case 2:
        query.prepare("UPDATE Scientist SET lastname = :LastName WHERE id = :Id");
        query.bindValue(":Id",tala);
        query.bindValue(":LastName", toedit.c_str());
        if(query.exec())
            Success = true;
        break;
    case 3:
        query.prepare("UPDATE Scientist SET gender = :Gender WHERE id = :Id");
        query.bindValue(":Id",tala);
        query.bindValue(":Gender", toedit.c_str());
        if(query.exec())
            Success = true;
        break;
    case 4:
        if(intedit == 0)
            return false;
        query.prepare("UPDATE Scientist SET yearborn = :YearBorn WHERE id = :Id");
        query.bindValue(":Id",tala);
        query.bindValue(":YearBorn", intedit);
        if(query.exec())
            Success = true;
        break;
    case 5:
        if(intedit == 0)
            return false;
        query.prepare("UPDATE Scientist SET death = :Death WHERE id = :Id");
        query.bindValue(":Id",tala);
        query.bindValue(":Death", intedit);
        if(query.exec())
            Success = true;
        break;
    }
    scientist.clear();
    return Success;

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
    scientist.clear();
    return Added;
}

bool ScientistData::remove(int Id)
{
    bool Success = false;
    QSqlQuery query(db);
    query.prepare("DELETE FROM Scientist WHERE Id = :Id");
    query.bindValue(":Id", Id);
    query.exec();

    if(query.exec())
    {
        Success = true;
    }
    return Success;
}

vector<Scientist> ScientistData::getSciVector()
{
    return scientist;
}


vector<int> ScientistData::getSciRelation(int sciID)
{
    QSqlQuery query(db);

    cout << endl << sciID << endl;

    query.prepare("SELECT computer_id FROM relations WHERE Scientist_ID = :input" );
    query.bindValue(":input",sciID);
    query.exec();


    vector<int> tempVec;

    while(query.next()){
        tempVec.push_back(query.value("Computer_ID").toUInt());
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
