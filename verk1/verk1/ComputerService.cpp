#include "computerservice.h"

//Default constructor
ComputerService::ComputerService()
{
    temp.ComputerToVector();
    com = temp.getComVector();
}

//This function sorts the data by year build
vector<Computer>ComputerService::SortNumbersList(int tala)
{
    int j;
    Computer temp;

    for(unsigned int i = 0; i < com.size(); i++){
        j = i;

        while (j > 0 && com[j].getNumbers(tala) < com[j-1].getNumbers(tala)){
            temp = com[j];
            com[j] = com[j-1];
            com[j-1] = temp;
            j--;

        }
    }
    return com;
}

//This function sorts the data by name, type and made
vector<Computer>ComputerService::SortStringList(int tala)
{
    int j;
    Computer temp;
    for(unsigned int i = 0; i < com.size(); i++)
    {
        j = i;

        while (j > 0 && com[j].getStrings(tala) < com[j-1].getStrings(tala))
        {
            temp = com[j];
            com[j] = com[j-1];
            com[j-1] = temp;
            j--;
        }
    }
    return com;
}

//This function returns variables into the vector from UI
bool ComputerService::add(Computer toAdd)
{
    bool ss = false;
    if(temp.AddComputer(toAdd))
        ss = true;

    temp.ComputerToVector();
    com = temp.getComVector();
    return ss;
}

//This function searches for the string in database which the user has put in
vector<Computer> ComputerService::Search(string toSearch)
{
    vector<Computer> temp;
    Computer current;

    for(unsigned int i = 0; i < com.size(); i++)
    {
        current = com[i];
        if(isdigit(toSearch[1]) == 1)
        {
            int intToSearch;
            std::stringstream ss(toSearch);
            ss >> intToSearch;
            int searchInt[2] = {current.getBuildYear(), current.getBuildYear()};
            if(searchInt[0] == intToSearch || searchInt[1] == intToSearch)
                temp.push_back(com[i]);
        }
        else
        {
             string searchWord = current.getName() + current.getType();

            if (searchWord.find(toSearch) != string::npos)
            {
                temp.push_back(com[i]);
            }
        }
    }
    return temp;
}

//This function return computer vector
vector<Computer> ComputerService::getVec()
{
    return com;
}

//Get computer vector?
vector<Computer> ComputerService::getComputerVec(vector<int> IDs)
{
    vector<Computer> tempVec;
    for(unsigned int i = 0; i < com.size(); i++)
    {
        for(unsigned int j = 0; j < IDs.size(); j++)
        {
            if(IDs[j] == com[i].getID())
            {
                tempVec.push_back(com[i]);
            }
        }
    }
    return tempVec;
}

//This function returns bool value if it was successfully or unsuccessfully removed
bool ComputerService::Remove(int Id)
{
    bool ss;
    ss = temp.remove(Id);
    temp.ComputerToVector();
    com = temp.getComVector();
    return ss;
}

//This function returns bool value if it was successfully or unsuccessfully edited
bool ComputerService::Edit(string toedit, int tala, int inputEdit)
{
    bool ss;
    ss = temp.Edit(toedit,tala,inputEdit);
    temp.ComputerToVector();
    com = temp.getComVector();
    return ss;
}

//This function returns computer relations
vector<int> ComputerService::getComRel(int comID)
{
    return temp.getComRelation(comID);
}

//This function add computer relations
bool ComputerService::addRelations(int comID, int sciID)
{
    return temp.addRelation(comID, sciID);
}

//This function removes computer relations
bool ComputerService::removeRelation(int comID, int sciID)
{
    return temp.removeRelation(comID, sciID);
}
