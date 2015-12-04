#ifndef DATABASE_H
#define DATABASE_H
#include <QtSql>
#include <QDebug>
#include "Scientist.h"
#include "computers.h"


class Database
{
public:
    Database();
    bool IsOpen()const;
    void InfoToVector();
    void ComputerToVector();
    void ScientistToVector();
    bool AddScientist(Scientist add);
    bool Addcomputers(Computers add);
private:
    QSqlDatabase db;
    vector<Scientist>scientist;
    vector<Computers>computers;
};

#endif // DATABASE_H
