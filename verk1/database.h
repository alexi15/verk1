#ifndef DATABASE_H
#define DATABASE_H
#include <QtSql>
#include <QDebug>
#include "Scientist.h"


class Database
{
public:
    Database();
    bool IsOpen()const;
    void InfoToVector();

private:
    QSqlDatabase db;
    vector<Scientist>scientist;
};

#endif // DATABASE_H
