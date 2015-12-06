#ifndef PERSONUR
#define PERSONUR
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Scientist
{

public:
    Scientist(int ID, string Nam, string Last, string Sex, int year, int dead);
    Scientist(string Nam, string Last, string Sex, int year, int dead);
    Scientist();
    string getFirstName();
    string getLastName();
    string getSex();
    int getYearBorn();
    int getYearDead();
    int getId();
    string GetStrings(int tala);
    int GetNumbers(int tala);

private:
    int id;
    string name;
    string lastname;
    string Gender;
    int yearBorn;
    int yearDead;
};

#endif // PERSONUR

