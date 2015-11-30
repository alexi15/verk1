#include <iostream>
#include "Service.h"
#include <data.h>
using namespace std;

Service::Service()
{

}

void Service::SortBirth(){

    Scientist temp;
    Data Vec;
    vector<Scientist>SortList = Vec.getVector();
    int j;

    for(unsigned int i = 0; i < SortList.size(); i++){
        j = i;

        while (j > 0 && SortList[j].getYearBorn() < SortList[j-1].getYearBorn()){
            temp = SortList[j];
            SortList[j] = SortList[j-1];
            SortList[j-1] = temp;
            j--;
        }
    }
    UI Ret;
    Ret.SortData(SortList);


}

void Service::SortDeath(){

    Scientist temp;
    Data Vec;
    vector<Scientist>SortList = Vec.getVector();
    int j;

    for(unsigned int i = 0; i < SortList.size(); i++){
        j = i;

        while (j > 0 && SortList[j].getYearDead() < SortList[j-1].getYearDead()){
            temp = SortList[j];
            SortList[j] = SortList[j-1];
            SortList[j-1] = temp;
            j--;
        }
    }
}


void Service::SortFirstNames(){

    Scientist temp;
    Data Vec;
    vector<Scientist>SortList = Vec.getVector();
    int j;

    for(unsigned int i = 0; i < SortList.size(); i++){
        j = i;

        while (j > 0 && SortList[j].getFirstName() < SortList[j-1].getFirstName()){
            temp = SortList[j];
            SortList[j] = SortList[j-1];
            SortList[j-1] = temp;
            j--;
        }
    }
}
void Service::SortLastNames(){

    Scientist temp;
    Data Vec;
    vector<Scientist>SortList = Vec.getVector();
    int j;

    for(unsigned int i = 0; i < SortList.size(); i++){
        j = i;

        while (j > 0 && SortList[j].getLastName() < SortList[j-1].getLastName()){
            temp = SortList[j];
            SortList[j] = SortList[j-1];
            SortList[j-1] = temp;
            j--;
        }
    }


}
void Service::SortGender(){
    Scientist temp;
    Data Vec;
    vector<Scientist>SortList = Vec.getVector();
    int j;
    for(unsigned int i = 0; i < SortList.size(); i++){
        j = i;

        while (j > 0 && SortList[j].getSex() < SortList[j-1].getSex()){
            temp = SortList[j];
            SortList[j] = SortList[j-1];
            SortList[j-1] = temp;
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

    Scientist temp(sName, sLast, sGender, sBorn, sDeath);

    Sci.push_back(temp);

}


