#include <iostream>
#include "Service.h"
#include <data.h>
using namespace std;





void Service::SortBirth(){

    Scientist temp;
    Data Vec;
    vector<Scientist>Temp1 = Vec.getVector();
    int j;

    for(unsigned int i = 0; i < Sci.size(); i++){
        j = i;

        while (j > 0 && Temp1[j].getYearBorn() < Temp1[j-1].getYearBorn()){
            temp = Sci[j];
            Sci[j] = Sci[j-1];
            Sci[j-1] = temp;
            j--;
        }
    }
}

void Service::SortDeath(){

    Scientist temp;
    Data Vec;
    vector<Scientist>Temp1 = Vec.getVector();
    int j;

    for(unsigned int i = 0; i < Sci.size(); i++){
        j = i;

        while (j > 0 && Sci[j].getYearDead() < Sci[j-1].getYearDead()){
            temp = Sci[j];
            Sci[j] = Sci[j-1];
            Sci[j-1] = temp;
            j--;
        }
    }
}


void Service::SortFirstNames(){

    Scientist temp;
    Data Vec;
    vector<Scientist>Temp1 = Vec.getVector();
    int j;

    for(unsigned int i = 0; i < Sci.size(); i++){
        j = i;

        while (j > 0 && Sci[j].getFirstName() < Sci[j-1].getFirstName()){
            temp = Sci[j];
            Sci[j] = Sci[j-1];
            Sci[j-1] = temp;
            j--;
        }
    }
}
void Service::SortLastNames(){

    Scientist temp;
    Data Vec;
    vector<Scientist>Temp1 = Vec.getVector();
    int j;

    for(unsigned int i = 0; i < Sci.size(); i++){
        j = i;

        while (j > 0 && Sci[j].getLastName() < Sci[j-1].getLastName()){
            temp = Sci[j];
            Sci[j] = Sci[j-1];
            Sci[j-1] = temp;
            j--;
        }
    }


}
void Service::SortGender(){
    Scientist temp;
    Data Vec;
    vector<Scientist>Temp1 = Vec.getVector();
    int j;
    for(unsigned int i = 0; i < Sci.size(); i++){
        j = i;

        while (j > 0 && Sci[j].getSex() < Sci[j-1].getSex()){
            temp = Sci[j];
            Sci[j] = Sci[j-1];
            Sci[j-1] = temp;
            j--;
        }
    }
}

void Service::add(){
    string sName;
    string sLast;
    string sGender;
    int sBorn;
    int sDeath;

    cin >> sName;
    cin >> sLast;
    cin >> sGender;
    cin >> sBorn;
    cin >> sDeath;






}


