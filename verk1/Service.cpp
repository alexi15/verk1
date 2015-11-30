#include <iostream>
#include "Service.h"
using namespace std;

Service::Service(){
    string Nam;
    string Last;
    string Gender;
    int Born;
    int Death;
    ifstream File1;
    File1.open("Prufa.txt");
    string temp;
    while(File1 >> Nam >> Last >> Gender >> Born >> Death){
        Scientist P(Nam,Last,Gender,Born,Death);
        scientist.push_back(P);
    }
   File1.close();
}

<<<<<<< HEAD:verk1/Service.cpp
void Service::SortBirth(){
=======
void ReadScientist::SaveFile(){
    string temp;
    cout << "Name of the file you want to save: ";
    cin >> temp;
    ofstream output;
    output.open(temp.c_str());
    for (unsigned int i = 0; i < scientist.size(); i++){

        output << "First Name: " << scientist[i].getFirstName() << endl;
        output << "Last Name: " << scientist[i].getLastName() << endl;
        output << "Gender: " << scientist[i].getSex() << endl;
        output << "Year born: " << scientist[i].getYearBorn() << endl;
        output << "Year of death: " << scientist[i].getYearDead() << endl;
    }
    output.close();

}

void ReadScientist::SortBirth(){
>>>>>>> 8e1c746d0dcc8489bebf10aeed5b93308d4fa68d:verk1/ReadScientist.cpp

    Scientist temp;
    int j;

    for(unsigned int i = 0; i < scientist.size(); i++){
        j = i;

        while (j > 0 && scientist[j].getYearBorn() < scientist[j-1].getYearBorn()){
            temp = scientist[j];
            scientist[j] = scientist[j-1];
            scientist[j-1] = temp;
            j--;
        }
    }

}

void Service::SortDeath(){

    Scientist temp;
    int j;

    for(unsigned int i = 0; i < scientist.size(); i++){
        j = i;

        while (j > 0 && scientist[j].getYearDead() < scientist[j-1].getYearDead()){
            temp = scientist[j];
            scientist[j] = scientist[j-1];
            scientist[j-1] = temp;
            j--;
        }
    }
}


void Service::SortFirstNames(){

    Scientist temp;
    int j;

    for(unsigned int i = 0; i < scientist.size(); i++){
        j = i;

        while (j > 0 && scientist[j].getFirstName() < scientist[j-1].getFirstName()){
            temp = scientist[j];
            scientist[j] = scientist[j-1];
            scientist[j-1] = temp;
            j--;
        }
    }
}
void Service::SortLastNames(){
    Scientist temp;
    int j;

    for(unsigned int i = 0; i < scientist.size(); i++){
        j = i;

        while (j > 0 && scientist[j].getLastName() < scientist[j-1].getLastName()){
            temp = scientist[j];
            scientist[j] = scientist[j-1];
            scientist[j-1] = temp;
            j--;
        }
    }


}
void Service::SortGender(){
    Scientist temp;
    int j;

    for(unsigned int i = 0; i < scientist.size(); i++){
        j = i;

        while (j > 0 && scientist[j].getSex() < scientist[j-1].getSex()){
            temp = scientist[j];
            scientist[j] = scientist[j-1];
            scientist[j-1] = temp;
            j--;
        }
    }
}

vector<Scientist> Service::getVector()
{
    return scientist;
}
