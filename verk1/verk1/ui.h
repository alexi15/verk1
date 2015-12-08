#ifndef UI_H
#define UI_H
#include <iostream>
#include <vector>
#include "Scientist.h"
#include "ScientistService.h"
#include "computerservice.h"
#include "computers.h"


class Service;

using namespace std;

class UI
{
public:
    UI();
    void PrintDataScientist(vector<Scientist>Sorted);
    void PrintDataComputers(vector<Computer>Sorted);
    int start();
    void NextStep();
    void addScientist();
    void addComputers();
    void addRelations();
    void ChooseSortScientist();
    void ChooseSortComputers();
    void ChooseSortRelations();
    void search();
    void editSci();
    void editCom();
    void editRel();
    void printSciName();
    void printComName();
    void RemoveRelation();
    void RemoveSci();
    void RemoveCom();

private:
    ScientistService scient;
    ComputerService com;
};

#endif // UI_H
