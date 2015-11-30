#include <QCoreApplication>
#include <iostream>
#include "Service.h"
#include "Scientist.h"


void PrintScientist(Scientist P);

int main(){
    UI temp;
    temp.start();
}
void PrintScientist(Scientist P){

    cout << "Name: " << P.getFirstName() << endl;
    cout << "Lastname: " << P.getLastName() << endl;
    cout << "Gender: " << P.getSex() << endl;
    cout << "YearBorn: " << P.getYearBorn() << endl;
    cout << "Death: " << P.getYearDead() << endl;
    cout << endl;

}
