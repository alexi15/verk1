#include "computerservice.h"

ComputerService::ComputerService()
{
    temp.ComputerToVector();
    com = temp.getComVector();
}

vector<Computer>ComputerService::SortNumbersList(){
    int j;
    Computer temp;

    for(unsigned int i = 0; i < com.size(); i++){
        j = i;

        while (j > 0 && com[j].getBuildYear() < com[j-1].getBuildYear()){
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


bool ComputerService::add(Computer number)
{
        com.push_back(number);
        temp.AddComputer(number);
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
