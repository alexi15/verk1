#ifndef COMPUTERDATABASE_H
#define COMPUTERDATABASE_H
#include <QtSql>
#include <QDebug>
#include "Scientist.h"
#include "computers.h"


class ComputerData
{
public:
    ComputerData();
    //ScientistData();
    bool IsOpen()const;
    void ComputerToVector();
    bool AddComputer(Computer add);
    vector<Computer> getComVector();
    vector<int> getComRelation(int comID);
private:
    QSqlDatabase db;
    vector<Computer>computers;
};





#endif // COMPUTERDATABASE_H
