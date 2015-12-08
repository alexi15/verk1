#include <QCoreApplication>
#include <iostream>
#include "Scientist.h"

using namespace std;

//constructor
Scientist::Scientist(int ID, string Nam, string Last, string Sex, int year, int dead)
{
    id = ID;
    name = Nam;
    lastname = Last;
    Gender = Sex;
    yearBorn = year;
    yearDead = dead;
}

//constructor
Scientist::Scientist(string Nam, string Last, string Sex, int year, int dead)
{
    name = Nam;
    lastname = Last;
    Gender = Sex;
    yearBorn = year;
    yearDead = dead;
}

//default constructor
Scientist::Scientist()
{
    name = "";
    lastname = "";
    Gender = "";
    yearBorn = 0;
    yearDead = 0;

}
//These get functions return private parameters
string Scientist::getFirstName()
{

    return name;
}

string Scientist::getLastName()
{

    return lastname;
}

string Scientist::getSex()
{

    return Gender;
}

int Scientist::getYearBorn()
{

    return yearBorn;
}
int Scientist::getYearDead()
{

    return yearDead;
}

int Scientist::getID()
{
    return id;
}

//This function used to sort strings
string Scientist::GetStrings(int tala)
{
      if (tala == 1)
      {
          return getFirstName();
      }
      else if (tala == 2)
      {
          return getLastName();
      }
      else if (tala == 3)
      {
          return getSex();
      }
      return 0;
}

//This function used to sort integers
int Scientist::GetNumbers(int tala)
{
    if (tala == 4)
    {
        return getYearBorn();
    }
    else if (tala == 5)
    {
        return getYearDead();
    }
    else if (tala == 6)
    {
        return getID();
    }
    return 0;
}
