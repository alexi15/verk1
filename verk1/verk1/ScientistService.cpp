#include <iostream>
#include "ScientistService.h"

using namespace std;

//default constructor
ScientistService::ScientistService()
{
    temp.ScientistToVector();
    sci = temp.getSciVector();
}
//This function sorts the data by birth or by death
vector<Scientist>ScientistService::SortNumbersList(int tala){
    int j;
    Scientist temp;

    for(unsigned int i = 0; i < sci.size(); i++){
        j = i;

        while (j > 0 && sci[j].GetNumbers(tala) < sci[j-1].GetNumbers(tala)){
            temp = sci[j];
            sci[j] = sci[j-1];
            sci[j-1] = temp;
            j--;
        }
    }
    return sci;

}
//This function sorts the data by first name, by last name or by gender
vector<Scientist>ScientistService::SortStringList(int tala)
{
    int j;
    Scientist temp;
    for(unsigned int i = 0; i < sci.size(); i++)
    {
        j = i;

        while (j > 0 && sci[j].GetStrings(tala) < sci[j-1].GetStrings(tala)){
            temp = sci[j];
            sci[j] = sci[j-1];
            sci[j-1] = temp;
            j--;
        }
    }
    return sci;
}
//This function returns variables into the vector form UI
bool ScientistService::add(Scientist toAdd)
{
    string sex = toAdd.getSex();
    if (sex != "male" && sex != "female"){
         return false;
    }

    else{
        sci.push_back(toAdd);
        temp.AddScientist(toAdd);
        return true;
    }
}
//This function searches for the string in data which the user has put in
vector<Scientist> ScientistService::Search(string toSearch)
{
    vector<Scientist> temp;
    Scientist current;

    for(unsigned int i = 0; i < sci.size(); i++)
    {
        current = sci[i];
        if(isdigit(toSearch[1]) == 1){
            int intToSearch;
            std::stringstream ss(toSearch);
            ss >> intToSearch;
            int searchInt[2] = {current.getYearBorn(), current.getYearDead()};
            if(searchInt[0] == intToSearch || searchInt[1] == intToSearch)
                temp.push_back(sci[i]);
        }
        else{
             string searchWord = current.getFirstName() + current.getLastName();

            if (searchWord.find(toSearch) != string::npos){
                temp.push_back(sci[i]);
            }
        }
    }
    return temp;
}

void ScientistService::Remove(int Id)
{
    temp.remove(Id);
}
void ScientistService::Edit(string toedit, int tala)
{

    temp.Edit(toedit,tala);

}

vector<Scientist> ScientistService::getVec()
{
    return sci;
}

vector<int> ScientistService::getSciRel(int sciID)
{
    return temp.getSciRelation(sciID);
}



vector<Scientist> ScientistService::getScientistVec(vector<int> IDs)
{
    vector<Scientist> tempVec;
    for(unsigned int i = 0; i < sci.size(); i++)
    {
        for(unsigned int j = 0; j < IDs.size(); j++)
        {
            if(IDs[j] == sci[i].getID())
            {
                tempVec.push_back(sci[i]);
            }
        }
    }
    return tempVec;
}
