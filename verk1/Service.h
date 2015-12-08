#ifndef READFILES
#define READFILES
#include<iostream>
#include <vector>
#include "Scientist.h"
#include <Database.h>


class Service
{
public:
    Service();
    vector<Scientist> SortStringList(int tala);
    vector<Scientist> SortNumbersList(int tala);
    bool add(Scientist number);
    vector<Scientist> Search(string toSearch);
    vector<Scientist> SearchFirst(string name);
    void SaveFile();
private:
    vector<Scientist> list;
};

#endif // READFILES


