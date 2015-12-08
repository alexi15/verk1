#ifndef COMPUTERS_H
#define COMPUTERS_H
#include <iostream>
using namespace std;

class Computers{
public:
    Computers();
    Computers(string nam, int year, string Type, string Made);
    string getName();
    int getBuildYear();
    string getType();
    string getMade();
    string getStrings(int tala);
private:
    string name;
    int BuildYear;
    string type;
    string made;
};

#endif // COMPUTERS_H
