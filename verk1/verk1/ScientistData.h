#ifndef ScientistData_H
#define ScientistData_H
#include <QtSql>
#include <QDebug>
#include "Scientist.h"
#include "computers.h"
#include <sstream>


class ScientistData
{
public:
    ScientistData();
    bool IsOpen()const;
    void ScientistToVector();
    bool AddScientist(Scientist add);
    vector<Scientist> getSciVector();
    vector<int> getSciRelation(int sciID);
    bool remove(int Id);
    bool Edit(string toedit, int tala);

private:
    QSqlDatabase db;
    vector<Scientist>scientist;
};

#endif // ScientistData_H
