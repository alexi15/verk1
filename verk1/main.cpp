#include <QCoreApplication>
#include <iostream>
#include "Service.h"
#include "Scientist.h"


void PrintScientist(Scientist P);

int main(){
<<<<<<< HEAD
    Service Call;
    Call.SortGender();
=======
    ReadScientist Call;
    Call.SortLastNames();
>>>>>>> 8e1c746d0dcc8489bebf10aeed5b93308d4fa68d



  for (unsigned int i = 0; i < Call.scientist.size(); i++){

        Scientist Test = Call.scientist[i];
        PrintScientist(Test);
    }

<<<<<<< HEAD
=======

    Call.SaveFile();


>>>>>>> 8e1c746d0dcc8489bebf10aeed5b93308d4fa68d
}
void PrintScientist(Scientist P){

    cout << "Name: " << P.getFirstName() << endl;
    cout << "Lastname: " << P.getLastName() << endl;
    cout << "Gender: " << P.getSex() << endl;
    cout << "YearBorn: " << P.getYearBorn() << endl;
    cout << "Death: " << P.getYearDead() << endl;
    cout << endl;

}
