#ifndef READFILES
#define READFILES
#include<iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include "Scientist.h"


class Service: public Scientist{
public:
    Service();
    void SortFirstNames();
    void SortGender();
    void SortDeath();
    void SortBirth();
    void SortLastNames();
    vector<Scientist> getVector();
    void SaveFile();






//private:

    vector<Scientist>scientist;
};

#endif // READFILES


