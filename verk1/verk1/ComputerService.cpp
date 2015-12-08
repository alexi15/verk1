#include "computerservice.h"

ComputerService::ComputerService()
{
    temp.ComputerToVector();
    com = temp.getComVector();
}

vector<Computer>ComputerService::SortNumbersList(int tala){
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

vector<Computer>ComputerService::SortStringList(int tala)
{
    int j;
    Computer temp;
    for(unsigned int i = 0; i < com.size(); i++)
    {
        j = i;

        while (j > 0 && com[j].getStrings(tala) < com[j-1].getStrings(tala)){
            temp = com[j];
            com[j] = com[j-1];
            com[j-1] = temp;
            j--;
        }
    }
    return com;
}


bool ComputerService::add(Computer toAdd)
{
    com.push_back(toAdd);
    temp.AddComputer(toAdd);
    return true;
}

vector<Computer> ComputerService::Search(string toSearch)
{
    vector<Computer> temp;
    Computer current;

    for(unsigned int i = 0; i < com.size(); i++)
    {
        current = com[i];
        if(isdigit(toSearch[1]) == 1){
            int intToSearch;
            std::stringstream ss(toSearch);
            ss >> intToSearch;
            int searchInt[2] = {current.getBuildYear(), current.getBuildYear()};
            if(searchInt[0] == intToSearch || searchInt[1] == intToSearch)
                temp.push_back(com[i]);
        }
        else{
             string searchWord = current.getName() + current.getType();

            if (searchWord.find(toSearch) != string::npos){
                temp.push_back(com[i]);
            }
        }
    }
    return temp;
}

vector<Computer> ComputerService::getVec()
{
    return com;
}


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

bool ComputerService::Remove(int Id)
{
    return temp.remove(Id);
}
bool ComputerService::Edit(string toedit, int tala, int inputEdit)
{
    bool ss;
    ss = temp.Edit(toedit,tala,inputEdit);
    temp.ComputerToVector();
    com = temp.getComVector();
    return ss;
}


vector<int> ComputerService::getComRel(int comID)
{
    return temp.getComRelation(comID);
}

bool ComputerService::addRelations(int comID, int sciID)
{
    return temp.addRelation(comID, sciID);
}

bool ComputerService::removeRelation(int comID, int sciID)
{
    return temp.removeRelation(comID, sciID);
}

