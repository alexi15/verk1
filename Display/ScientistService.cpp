#include <iostream>
#include "ScientistService.h"

using namespace std;

//default constructor
ScientistService::ScientistService()
{
    temp.ScientistToVector();
    sci = temp.getSciVector();
}

//This function takes variables from UI and adds to scientistdata and returns if successfull or unsuccessfull.
bool ScientistService::add(Scientist toAdd)
{
    bool ss;
       if (temp.AddScientist(toAdd))
        ss = true;

    temp.ScientistToVector();
    sci = temp.getSciVector();
    return ss;
}

//This function searches for the string or integer that user from UI enter.
vector<Scientist> ScientistService::Search(string toSearch)
{
    vector<Scientist> temp;
    Scientist current;

    for(unsigned int i = 0;i < sci.size(); i++)
    {
        toSearch[0] = toupper(toSearch[0]);
        current = sci[i];
        string first = current.getFirstName();
        string last = current.getLastName();
        string gender = current.getSex();
        string born;
        string dead;
        stringstream s, ss;
        s << current.getYearBorn();
        s >> born;
        ss << current.getYearDead();
        ss >> dead;
        bool low = true;

        string searchWord = first + " " + last + " " + gender +
                " " + born + " " + dead;

        if (searchWord.find(toSearch) != string::npos)
        {
            temp.push_back(sci[i]);
            low = false;
        }
        toSearch[0] = tolower(toSearch[0]);
        if (low && searchWord.find(toSearch) != string::npos)
        {
            temp.push_back(sci[i]);
        }
    }
    return temp;
}

//This function returns bool value if it was successfully or unsuccessfully removed
bool ScientistService::Remove(int Id)
{
    bool ss;
    ss = temp.remove(Id);
    temp.ScientistToVector();
    sci = temp.getSciVector();
    temp.removeRelationsFromID(Id);
    return ss;
}

//This function returns bool value if it was successfully or unsuccessfully edited
bool ScientistService::Edit(string toedit, int tala, int inputEdit)
{
    bool ss;
    ss = temp.Edit(toedit,tala,inputEdit);
    temp.ScientistToVector();
    sci = temp.getSciVector();
    return ss;
}

Scientist ScientistService::getSci(int inputID)
{
    Scientist temp;

    for(unsigned int i = 0;i < sci.size(); i++)
    {
        if(sci[i].getID() == inputID)
            temp = sci[i];
    }
    return temp;
}

void ScientistService::setVec(vector<Scientist> newVec)
{
        sci = newVec;
}

//This function returns scientis vector
vector<Scientist> ScientistService::getVec()
{
    return sci;
}

//This function returns scientist relations to computer
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
