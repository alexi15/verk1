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
    Service(vector<Scientist> scientist);
    vector<Scientist> SortFirstNames();
    vector<Scientist> SortGender();
    vector<Scientist> SortDeath();
    vector<Scientist> SortBirth();
    vector<Scientist> SortLastNames();
    void add(Scientist temp);
    vector<Scientist> Search(string toSearch);
    vector<Scientist> SearchFirst(string name);
    void SaveFile();
private:
    vector<Scientist> list;
};

#endif // READFILES


