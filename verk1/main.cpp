#include <QCoreApplication>
#include <iostream>
#include "Service.h"
#include "Scientist.h"


void PrintScientist(Scientist P);

int main(){
    Service Call;
    Call.SortGender();



  for (unsigned int i = 0; i < Call.scientist.size(); i++){

        Scientist Test = Call.scientist[i];
        PrintScientist(Test);
    }

    Call.SaveFile();

}
void PrintScientist(Scientist P){

    cout << "Name: " << P.getFirstName() << endl;
    cout << "Lastname: " << P.getLastName() << endl;
    cout << "Gender: " << P.getSex() << endl;
    cout << "YearBorn: " << P.getYearBorn() << endl;
    cout << "Death: " << P.getYearDead() << endl;
    cout << endl;

}
