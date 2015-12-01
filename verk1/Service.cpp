#include <iostream>
#include <sstream>
#include "Service.h"
#include <data.h>
using namespace std;

Service::Service()
{
    Data temp;
    temp.load();
    list = temp.getVector();
}

Service::Service(vector<Scientist> scientist)
{
    Data temp;
    temp.load();
    list = temp.getVector();
}

vector<Scientist>Service::SortBirth(){

    Scientist temp;

    int j;


    for(unsigned int i = 0; i < list.size(); i++){
        j = i;

        while (j > 0 && list[j].getYearBorn() < list[j-1].getYearBorn()){
            temp = list[j];
            list[j] = list[j-1];
            list[j-1] = temp;
            j--;
        }
    }
    return list;
}




vector<Scientist>Service::SortDeath(){

    Scientist temp;

    int j;

    for(unsigned int i = 0; i < list.size(); i++){
        j = i;

        while (j > 0 && list[j].getYearDead() < list[j-1].getYearDead()){
            temp = list[j];
            list[j] = list[j-1];
            list[j-1] = temp;
            j--;
        }
    }
    return list;

}


vector<Scientist>Service::SortFirstNames(){

    Scientist temp;

    int j;
    for(unsigned int i = 0; i < list.size(); i++){
        j = i;

        while (j > 0 && list[j].getFirstName() < list[j-1].getFirstName()){
            temp = list[j];
            list[j] = list[j-1];
            list[j-1] = temp;
            j--;
        }

    }
     return list;
}
vector<Scientist>Service::SortLastNames(){

    Scientist temp;

    int j;

    for(unsigned int i = 0; i < list.size(); i++){
        j = i;

        while (j > 0 && list[j].getLastName() < list[j-1].getLastName()){
            temp = list[j];
            list[j] = list[j-1];
            list[j-1] = temp;
            j--;
        }
    }
     return list;

}
vector<Scientist>Service::SortGender(){
    Scientist temp;

    int j;
    for(unsigned int i = 0; i < list.size(); i++){
        j = i;

        while (j > 0 && list[j].getSex() < list[j-1].getSex()){
            temp = list[j];
            list[j] = list[j-1];
            list[j-1] = temp;
            j--;
        }
    }
    return list;
}

void Service::add(Scientist temp){
    Data Vec;
    Vec.load();
    //vector<Scientist>addvec = Vec.getVector();
/*
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
*/
    //addvec.push_back(temp);
    Vec.getVector().push_back(temp);
    Vec.SaveFile();
}

vector<Scientist> Service::Search(string toSearch)
{
    vector<Scientist> temp;
    Data vec;
    vec.load();
    vector<Scientist>SearchList = vec.getVector();
    Scientist current;

    for(unsigned int i = 0; i < SearchList.size(); i++)
    {
        current = SearchList[i];
        if(isdigit(toSearch[1]) == 1){
            int intToSearch;
            std::stringstream ss(toSearch);
            ss >> intToSearch;
            int searchInt[2] = {current.getYearBorn(), current.getYearDead()};
            if(searchInt[0] == intToSearch || searchInt[1] == intToSearch)
                temp.push_back(SearchList[i]);
        }
        else{
             string searchWord = current.getFirstName() + current.getLastName();

            if (searchWord.find(toSearch) != string::npos){
                temp.push_back(SearchList[i]);
            }
        }
    }

    return temp;

}


void Service::SaveFile(){

    Data temp;
    temp.load();
    temp.SaveFile();

}
