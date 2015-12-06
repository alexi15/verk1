#include <QCoreApplication>
#include <iostream>
#include "Scientist.h"

using namespace std;

//constructor
Scientist::Scientist(string Nam, string Last, string Sex, int year, int dead){
    name = Nam;
    lastname = Last;
    Gender = Sex;
    yearBorn = year;
    yearDead = dead;
}
//default constructor
Scientist::Scientist(){
    name = "";
    lastname = "";
    Gender = "";
    yearBorn = 0;
    yearDead = 0;

}
//These get functions return private parameters
string Scientist::getFirstName(){

    return name;
}

string Scientist::getLastName(){

    return lastname;
}

string Scientist::getSex(){

    return Gender;
}

int Scientist::getYearBorn(){

    return yearBorn;
}
int Scientist::getYearDead(){

    return yearDead;
}

string Scientist::GetStrings(int tala){
      if (tala == 1){
          return getFirstName();
      }
      else if (tala == 2){
          return getLastName();
      }
      else if (tala == 3){
          return getSex();
      }
}

int Scientist::GetNumbers(int tala){
    if (tala == 4){
        return getYearBorn();
    }
    else if (tala == 5){
        return getYearDead();
    }
}





