#ifndef READFILES
#define READFILES
#include<iostream>
#include "ui.h"
#include <vector>
#include "Scientist.h"
#include <data.h>


class Service{
public:
    Service();
    vector<Scientist> SortStringList(int tala);
    vector<Scientist> SortNumbersList(int tala);
    void add(Scientist temp);
    vector<Scientist> Search(string toSearch);
    vector<Scientist> SearchFirst(string name);
    void SaveFile();
private:
    vector<Scientist> list;
};

#endif // READFILES


