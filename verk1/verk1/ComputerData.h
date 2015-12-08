#ifndef COMPUTERDATABASE_H
#define COMPUTERDATABASE_H
#include <QtSql>
#include <QDebug>
#include "Scientist.h"
#include "computers.h"
#include <sstream>


class ComputerData
{
public:
    ComputerData();
    bool IsOpen()const;
    void ComputerToVector();
    bool AddComputer(Computer add);
    vector<Computer> getComVector();
    vector<int> getComRelation(int comID);
    bool remove(int Id);
    bool addRelation(int comID, int sciID);
    bool removeRelation(int comID, int sciID);
    bool Edit(string toedit, int tala, int inputEdit);
private:
    QSqlDatabase db;
    vector<Computer>computers;
};





#endif // COMPUTERDATABASE_H
