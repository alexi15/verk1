#include "data.h"
#include "Service.h"

Data::Data()
{
    string Nam;
    string Last;
    string Gender;
    int Born;
    int Death;
    ifstream File1;
    File1.open("Prufa.txt");
    string temp;
    while(File1 >> Nam >> Last >> Gender >> Born >> Death){
        Scientist P(Nam,Last,Gender,Born,Death);
        scientist.push_back(P);
    }
   File1.close();
}

void Data::SaveFile(){
    string temp;
    cout << "Name of the file you want to save: ";
    cin >> temp;
    ofstream output;
    output.open(temp.c_str());
    for (unsigned int i = 0; i < scientist.size(); i++){

        output << "First Name: " << scientist[i].getFirstName() << endl;
        output << "Last Name: " << scientist[i].getLastName() << endl;
        output << "Gender: " << scientist[i].getSex() << endl;
        output << "Year born: " << scientist[i].getYearBorn() << endl;
        output << "Year of death: " << scientist[i].getYearDead() << endl;
    }
    output.close();

}

