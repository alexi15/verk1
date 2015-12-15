#include "computerservice.h"

//Default constructor
ComputerService::ComputerService()
{
    temp.ComputerToVector();
    com = temp.getComVector();
}

//This function adds a computer to vector and refreshes vector
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

    for(unsigned int i = 0;i < com.size(); i++)
    {
        toSearch[0] = toupper(toSearch[0]);
        current = com[i];
        string name = current.getName();
        string type = current.getType();
        string made = current.getMade();
        string year;
        stringstream s;
        s << current.getBuildYear();
        s >> year;


        string searchWord = name + " " + made + " " +
                type + " " + year;

        if (searchWord.find(toSearch) != string::npos)
        {
            temp.push_back(com[i]);
        }
        toSearch[0] = tolower(toSearch[0]);
        if (searchWord.find(toSearch) != string::npos)
        {
            temp.push_back(com[i]);
        }
    }
    return temp;
    return temp;
}

//This function return computer vector
vector<Computer> ComputerService::getVec()
{
    return com;
}

//This functions gets the ids from relation table and finds the relation
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
    temp.removeRelationsFromID(Id);
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

Computer ComputerService::getCom(int inputID)
{
    for(unsigned int i = 0;i < com.size(); i++)
    {
        if(com[i].getID() == inputID)
            return com[i];
    }
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
