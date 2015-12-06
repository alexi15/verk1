#ifndef READFILES
#define READFILES
#include<iostream>
#include <vector>
#include "Scientist.h"
#include "computers.h"
#include "ScientistData.h"


class Service{
public:
    Service();
    vector<Scientist> SortStringList(int tala);
    vector<Scientist> SortNumbersList(int tala);
    bool add(Scientist number);
    vector<Scientist> Search(string toSearch);
    vector<Scientist> SearchFirst(string name);
    void SaveFile();
private:
    Database temp;
    vector<Scientist> sci;
    vector<Computers> comp;
};

#endif // READFILES


