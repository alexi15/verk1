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
<<<<<<< HEAD:verk1/Service.h
    vector<Scientist> getVector();
=======
    void SaveFile();






>>>>>>> 8e1c746d0dcc8489bebf10aeed5b93308d4fa68d:verk1/ReadScientist.h

//private:

    vector<Scientist>scientist;
};

#endif // READFILES


