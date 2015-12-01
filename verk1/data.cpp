#include "data.h"



Data::Data()
{

}

void Data::load(){
    string Nam;
    string Last;
    string Gender;
    int Born;
    int Death;
    ifstream File1;
    File1.open("No.txt");
    if(File1.fail()){
        cout << "Error Opening File" << endl;
        //exit(1);
    }
    string temp;
    while(File1 >> Nam >> Last >> Gender >> Born >> Death){
        Scientist P(Nam,Last,Gender,Born,Death);
        scientist.push_back(P);
    }
   File1.close();
}

void Data::SaveFile(vector<Scientist>VecSave){
    ofstream output;
    output.open("No.txt");
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

vector<Scientist>Data::getVector(){

    return scientist;

}

