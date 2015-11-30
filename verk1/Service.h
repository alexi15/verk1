#ifndef READFILES
#define READFILES
#include<iostream>
#include "ui.h"
#include <vector>
#include "Scientist.h"


class Service{
public:
    Service();
    vector<Scientist> SortFirstNames();
    vector<Scientist> SortGender();
    vector<Scientist> SortDeath();
    vector<Scientist> SortBirth();
    vector<Scientist> SortLastNames();
    void add(Scientist temp);
    vector<Scientist> SearchFirst(string name);
};

#endif // READFILES


