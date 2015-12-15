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
    vector<Scientist> SortStringList(int tala);
    vector<Scientist> SortNumbersList(int tala);
    bool add(Scientist number);
    vector<Scientist> Search(string toSearch);
    vector<Scientist> SearchFirst(string name);
    vector<Scientist> getVec();
    vector<int> getSciRel(int sciID);
    vector<Scientist> getScientistVec(vector<int> IDs);
    bool Remove(int Id);
    bool Edit(string toedit, int tala, int inputEdit);
    Scientist getSci(int inputID);


private:
    ScientistData temp;
    vector<Scientist> sci;
};

#endif // READFILES


