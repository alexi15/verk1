#include <iostream>
#include <sstream>
#include "Service.h"
#include <data.h>
using namespace std;

Service::Service()
{

}

vector<Scientist>Service::SortBirth(){

    Scientist temp;
    Data Vec;
    Vec.load();
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
    return SortList;
}




vector<Scientist>Service::SortDeath(){

    Scientist temp;
    Data Vec;
    Vec.load();
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
    return SortList;

}


vector<Scientist>Service::SortFirstNames(){

    Scientist temp;
    Data Vec;
    Vec.load();
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
     return SortList;
}
vector<Scientist>Service::SortLastNames(){

    Scientist temp;
    Data Vec;
    Vec.load();
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
     return SortList;

}
vector<Scientist>Service::SortGender(){
    Scientist temp;
    Data Vec;
    Vec.load();
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
     return SortList;
}

void Service::add(Scientist temp){
    Data Vec;
    Vec.load();
    vector<Scientist>addvec = Vec.getVector();
    /*string sName;
    string sLast;
    string sGender;
    int sBorn;
    int sDeath;

    cin >> sName;
    cin >> sLast;
    cin >> sGender;
    cin >> sBorn;
    cin >> sDeath;

    Scientist temp(sName, sLast, sGender, sBorn, sDeath);*/

    addvec.push_back(temp);

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
