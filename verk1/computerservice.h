#ifndef COMPUTERSERVICE_H
#define COMPUTERSERVICE_H
#include<iostream>
#include <vector>
#include "Scientist.h"
#include "computers.h"
#include "database.h"

class ComputerService
{
public:
    ComputerService();
    vector<Scientist> SortStringList(int tala);
    vector<Scientist> SortNumbersList(int tala);
    bool add(Scientist number);
    vector<Scientist> Search(string toSearch);
    vector<Scientist> SearchFirst(string name);
    void SaveFile();
private:
    Database temp;
    vector<Computers> com;
};

#endif // COMPUTERSERVICE_H
