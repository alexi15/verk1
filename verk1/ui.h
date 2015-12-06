#ifndef UI_H
#define UI_H
#include <iostream>
#include <vector>
#include "Scientist.h"
#include "ScientistService.h"
//class Service;

using namespace std;

class UI
{
public:
    UI();
    void start();
    void ChooseSort();
    void ChooseSearch();
    void add();
    void PrintData(vector<Scientist>Sorted);
    void search();
    void SaveFile();

private:
    ScientistService temp;
};

#endif // UI_H
