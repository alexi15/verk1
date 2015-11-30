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
    void PrintData(vector<Scientist>Sorted);

};

#endif // UI_H
