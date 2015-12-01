#include "data.h"
#include "Service.h"


Data::Data()
{
    /*
    string Nam;
    string Last;
    string Gender;
    int Born;
    int Death;
    ifstream File1;
    File1.open("Alex.txt");
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
*/
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

void Data::SaveFile(){
    ofstream output;
    output.open("No.txt");
    for (unsigned int i = 0; i < scientist.size(); i++){

        output << scientist[i].getFirstName() << " ";
        output << scientist[i].getLastName() << endl;
        output << scientist[i].getSex() << endl;
        output << scientist[i].getYearBorn() << endl;
        output << scientist[i].getYearDead() << endl;
        output << endl;
    }
    output.close();
}

vector<Scientist>Data::getVector(){

    return scientist;

}
