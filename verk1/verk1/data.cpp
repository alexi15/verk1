#include "data.h"
#include <QtSql>
#include <QtDebug>

//default constructor
Data::Data()
{
}
//This function loads the file fraedingar.txt into a vector
void Data::load(){
    string Nam;
    string Last;
    string Gender;
    int Born;
    int Death;
    ifstream File1;
    File1.open("fraedingar.txt");
    string temp;
    while(File1 >> Nam >> Last >> Gender >> Born >> Death){
        Scientist P(Nam,Last,Gender,Born,Death);
        scientist.push_back(P);
    }
   File1.close();
}
//This function saves the information into the file fraedingar.txt
void Data::SaveFile(vector<Scientist>VecSave){
    ofstream output;
    output.open("fraedingar.txt");
    for (unsigned int i = 0; i < VecSave.size(); i++){

        output << VecSave[i].getFirstName() << " ";
        output << VecSave[i].getLastName() << endl;
        output << VecSave[i].getSex() << endl;
        output << VecSave[i].getYearBorn() << endl;
        output << VecSave[i].getYearDead() << endl;
        output << endl;
    }
    output.close();
}
//A get function that returns a vector with scientist
vector<Scientist>Data::getVector(){

    return scientist;

}

