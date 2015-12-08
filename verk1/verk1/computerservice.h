#ifndef COMPUTERSERVICE_H
#define COMPUTERSERVICE_H
#include<iostream>
#include <vector>
#include <sstream>
#include "computers.h"
#include "ComputerData.h"




class ComputerService
{
public:
    ComputerService();
    vector<Computer> SortStringList(int tala);
    vector<Computer> SortNumbersList(int tala);
    bool add(Computer number);
    vector<Computer> Search(string toSearch);
    vector<Computer> SearchFirst(string name);
    vector<Computer> getVec();
    vector<Computer> getComputerVec(vector<int> IDs);
    vector<int> getComRel(int comID);
    bool Remove(int Id);
    bool addRelations(int comID, int sciID);
    bool removeRelation(int comID, int sciID);
    void update();

private:
    ComputerData temp;
    vector<Computer> com;
};

#endif // COMPUTERSERVICE_H
