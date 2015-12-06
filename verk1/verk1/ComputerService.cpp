#include "ComputerService.h"

ComputerService::ComputerService()
{
    temp.ComputerToVector();
    com = temp.getComVector();
}

vector<Computers> ComputerService::SortNumbersList(int tala)
{
    int j;
    Computers temp;

    for(unsigned int i = 0; i < com.size(); i++){
        j = i;

        while (j > 0 && com[j].GetNumbers(tala) < com[j-1].GetNumbers(tala)){
            temp = com[j];
            com[j] = com[j-1];
            com[j-1] = temp;
            j--;
        }
    }
    return com;
}

vector<Scientist> ComputerService::SortStringList(int tala)
{
    int j;
    Scientist temp;
    for(unsigned int i = 0; i < com.size(); i++){
        j = i;

        while(j > 0 && sci[j].GetStrings(tala) < sci[j-1].GetStrings(tala))
        {
            temp = sci[j];
            sci[j] = sci[j-1];
            sci[j-1] = temp;
            j--;
        }
    }
    return com;
}
