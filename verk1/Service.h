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
    vector<Scientist> SortFirstNames();
    vector<Scientist> SortGender();
    vector<Scientist> SortDeath();
    vector<Scientist> SortBirth();
    vector<Scientist> SortLastNames();
    void add(Scientist temp);
<<<<<<< HEAD
    vector<Scientist> Search(string toSearch);
=======
    vector<Scientist> SearchFirst(string name);
    void LoadFile(string FileName);
>>>>>>> 3a55e130d7a5c7f959172641b680c9d93fd00fb7
};

#endif // READFILES


