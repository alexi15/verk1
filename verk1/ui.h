#ifndef UI_H
#define UI_H
#include <iostream>
#include <vector>
#include "Scientist.h"
#include "Service.h"

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

private:
    string FileName;
};

#endif // UI_H
