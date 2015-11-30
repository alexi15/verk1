#ifndef READFILES
#define READFILES
#include<iostream>
#include <fstream>
#include <cstdlib>
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

private:
    vector<Scientist>Sci;


};

#endif // READFILES


