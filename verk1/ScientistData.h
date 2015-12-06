#ifndef ScientistData_H
#define ScientistData_H
#include <QtSql>
#include <QDebug>
#include "Scientist.h"
#include "computers.h"


class ScientistData
{
public:
    ScientistData();
    bool IsOpen()const;
    void ScientistToVector();
    bool Addcomputers(Computers add);
    vector<Scientist> getSciVector();
private:
    QSqlDatabase db;
    vector<Scientist>scientist;
};

#endif // ScientistData_H
