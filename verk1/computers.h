#ifndef COMPUTERS_H
#define COMPUTERS_H
#include <iostream>
using namespace std;

class Computer
{
public:
    Computer();
    Computer(int ID, string nam, int year, string Type, string Made);
    Computer(string nam, int year, string Type, string Made);
    string getName();
    int getBuildYear();
    string getType();
    string getMade();
    int getID();
    string getStrings(int tala);
    int getNumbers(int tala);
private:
    int id;
    string name;
    int BuildYear;
    string type;
    string made;
};

#endif // COMPUTERS_H
