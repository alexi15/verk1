#ifndef READFILES
#define READFILES
#include<iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include "Scientist.h"


class Service{
public:
    Service();
    void SortFirstNames();
    void SortGender();
    void SortDeath();
    void SortBirth();
    void SortLastNames();
    vector<Scientist>getVector();

private:
    vector<Scientist>scien;


};

#endif // READFILES


