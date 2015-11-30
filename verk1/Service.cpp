#include <iostream>
#include "Service.h"
using namespace std;





void Service::SortBirth(){

    Scientist temp;
    int j;

    for(unsigned int i = 0; i < scien.size(); i++){
        j = i;

        while (j > 0 && scien[j].getYearBorn() < scien[j-1].getYearBorn()){
            temp = scien[j];
            scien[j] = scien[j-1];
            scien[j-1] = temp;
            j--;
        }
    }

}

void Service::SortDeath(){

    Scientist temp;
    int j;

    for(unsigned int i = 0; i < scien.size(); i++){
        j = i;

        while (j > 0 && scien[j].getYearDead() < scien[j-1].getYearDead()){
            temp = scien[j];
            scien[j] = scien[j-1];
            scien[j-1] = temp;
            j--;
        }
    }
}


void Service::SortFirstNames(){

    Scientist temp;
    int j;

    for(unsigned int i = 0; i < scien.size(); i++){
        j = i;

        while (j > 0 && scien[j].getFirstName() < scien[j-1].getFirstName()){
            temp = scien[j];
            scien[j] = scien[j-1];
            scien[j-1] = temp;
            j--;
        }
    }
}
void Service::SortLastNames(){
    Scientist temp;
    int j;

    for(unsigned int i = 0; i < scien.size(); i++){
        j = i;

        while (j > 0 && scien[j].getLastName() < scien[j-1].getLastName()){
            temp = scien[j];
            scien[j] = scien[j-1];
            scien[j-1] = temp;
            j--;
        }
    }


}
void Service::SortGender(){
    Scientist temp;
    int j;

    for(unsigned int i = 0; i < scien.size(); i++){
        j = i;

        while (j > 0 && scien[j].getSex() < scien[j-1].getSex()){
            temp = scien[j];
            scien[j] = scien[j-1];
            scien[j-1] = temp;
            j--;
        }
    }
}

vector<Scientist> Service::getVector()
{
    return scien;
}
