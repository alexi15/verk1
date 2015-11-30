#include <QCoreApplication>
#include <iostream>
#include "Scientist.h"

using namespace std;


Scientist::Scientist(string Nam, string Last, string Sex, int year, int dead){
    name = Nam;
    lastname = Last;
    Gender = Sex;
    yearBorn = year;
    yearDead = dead;
}
Scientist::Scientist(){
    name = "";
    lastname = "";
    Gender = "";
    yearBorn = 0;
    yearDead = 0;

}

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






