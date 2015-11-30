#ifndef READFILES
#define READFILES
#include<iostream>
#include "ui.h"
#include <vector>
#include "Scientist.h"


class Service{
public:
    Service();
    void SortFirstNames();
    void SortGender();
    void SortDeath();
    void SortBirth();
    void SortLastNames();
    void add();
    vector<Scientist> SearchFirst(string name);
};

#endif // READFILES


