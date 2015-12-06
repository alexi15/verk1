#ifndef COMPUTERDATABASE_H
#define COMPUTERDATABASE_H
#include <QtSql>
#include <QDebug>
#include "Scientist.h"
#include "computers.h"


class ComputerDatabase
{
public:
    ComputerDatabase();
    ScientistData();
    bool IsOpen()const;
    void ComputerToVector();
    bool Addcomputers(Computers add);
    vector<Scientist> getCompVector();
private:
    QSqlDatabase db;
    vector<Computers>computers;
};





#endif // COMPUTERDATABASE_H
