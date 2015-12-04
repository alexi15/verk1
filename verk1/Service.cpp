#include <iostream>
#include <sstream>
#include "Service.h"
#include <data.h>
using namespace std;

//default constructor
Service::Service()
{
    Data temp;
    temp.load();
    list = temp.getVector();
}
//This function sorts the data by birth or by death
vector<Scientist>Service::SortNumbersList(int tala){
    int j;
    Scientist temp;

    for(unsigned int i = 0; i < list.size(); i++){
        j = i;

        while (j > 0 && list[j].GetNumbers(tala) < list[j-1].GetNumbers(tala)){
            temp = list[j];
            list[j] = list[j-1];
            list[j-1] = temp;
            j--;
        }
    }
    return list;

}
//This function sorts the data by first name, by last name or by gender
vector<Scientist>Service::SortStringList(int tala)
{
    int j;
    Scientist temp;
    for(unsigned int i = 0; i < list.size(); i++)
    {
        j = i;

        while (j > 0 && list[j].GetStrings(tala) < list[j-1].GetStrings(tala)){
            temp = list[j];
            list[j] = list[j-1];
            list[j-1] = temp;
            j--;
        }
    }
    return list;
}
//This function returns variables into the vector form UI
bool Service::add(Scientist number)
{
    string sex = number.getSex();
    if (sex != "male" && sex != "female"){
         return false;
    }

    else{
        list.push_back(number);
        return true;
    }
}
//This function searches for the string in data which the user has put in
vector<Scientist> Service::Search(string toSearch)
{
    vector<Scientist> temp;
    Scientist current;

    for(unsigned int i = 0; i < list.size(); i++)
    {
        current = list[i];
        if(isdigit(toSearch[1]) == 1){
            int intToSearch;
            std::stringstream ss(toSearch);
            ss >> intToSearch;
            int searchInt[2] = {current.getYearBorn(), current.getYearDead()};
            if(searchInt[0] == intToSearch || searchInt[1] == intToSearch)
                temp.push_back(list[i]);
        }
        else{
             string searchWord = current.getFirstName() + current.getLastName();

            if (searchWord.find(toSearch) != string::npos){
                temp.push_back(list[i]);
            }
        }
    }
    return temp;
}

//This function connects the domain layer(Servise) to data layer to save the file
void Service::SaveFile(){
    Data temp;
    temp.SaveFile(list);
}
