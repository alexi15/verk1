#ifndef READFILES
#define READFILES
#include<iostream>
#include <vector>
#include <sstream>
#include "Scientist.h"
#include "ScientistData.h"


class ScientistService{
public:
    ScientistService();
    bool add(Scientist number);
    vector<Scientist> Search(string toSearch);
    vector<Scientist> SearchFirst(string name);
    vector<Scientist> getVec();
    vector<int> getSciRel(int sciID);
    vector<Scientist> getScientistVec(vector<int> IDs);
    bool Remove(int Id);
    bool Edit(string toedit, int tala, int inputEdit);
    Scientist getSci(int inputID);
    void setVec(vector<Scientist> newVec);


private:
    ScientistData temp;
    vector<Scientist> sci;
};

#endif // READFILES


