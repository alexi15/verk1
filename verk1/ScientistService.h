#ifndef READFILES
#define READFILES
#include<iostream>
#include <vector>
#include "Scientist.h"
#include "computers.h"
#include "database.h"


class ScientistService{
public:
    ScientistService();
    vector<Scientist> SortStringList(int tala);
    vector<Scientist> SortNumbersList(int tala);
    bool add(Scientist number);
    vector<Scientist> Search(string toSearch);
    vector<Scientist> SearchFirst(string name);
    void SaveFile();
private:
    Database temp;
    vector<Computers> sci;
};

#endif // READFILES


