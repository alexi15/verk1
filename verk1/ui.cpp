#include "ui.h"

UI::UI()
{



}



void UI::PrintData(vector<Scientist>Sorted){

    for(unsigned int i = 0; i < Sorted.size(); i++){
        cout << "Name: " << Sorted[i].getFirstName() << endl;
        cout << "Lastname: " << Sorted[i].getLastName() << endl;
        cout << "Gender: " << Sorted[i].getSex() << endl;
        cout << "YearBorn: " << Sorted[i].getYearBorn() << endl;
        cout << "Death: " << Sorted[i].getYearDead() << endl;
        cout << endl;

    }
}

void UI::start()
{
    int number;
    char Continue;
    Service temp;

    do{
    cout << "-------What do you want to do-------" << endl;
    cout << "Do you want to add, sort, save or search? " << endl;
    cout << "Press 1 to add" << endl;
    cout << "Press 2 to sort" << endl;
    cout << "Press 3 to search" << endl;
    cout << "Press 4 to save" << endl;
    cin >> number;

    switch(number)
    {
        case 1:
            add();
            break;
        case 2:
            ChooseSort();
            break;
        case 3:
            search();
            break;
        case 4:
            SaveFile();
            break;
        default:
           cout << "Error in input" << endl;
           cout << "Please choose a number between 1 to 3"<< endl;
        }
    cout << "Do you want to continue ? " << endl;
    cout << "y or n " << endl;
    cin >> Continue;
    if (Continue == 'N' || Continue == 'n')
        break;
    }while(1<2);
}


void UI::ChooseSort()
{
    vector<Scientist>Data;
    int input;
    Service temp;
    cout << "Press 1 to sort by first name " << endl;
    cout << "Press 2 to sort by last name" << endl;
    cout << "Press 3 to sort by gender" << endl;
    cout << "Press 4 to sort by birth" << endl;
    cout << "Press 5 to sort by death" << endl;


    cin >> input;

    switch(input)
    {
        case 1:
            Data = temp.SortFirstNames();
            PrintData(Data);
            break;
        case 2:
            Data = temp.SortLastNames();
            PrintData(Data);
            break;
        case 3:
            Data = temp.SortGender();
            PrintData(Data);
            break;
        case 4:
            Data = temp.SortBirth();
            PrintData(Data);
            break;
        case 5:
            Data = temp.SortDeath();
            PrintData(Data);
            break;
        default:
           cout << "Error in input" << endl;
           cout << "Please choose a number between 1 to 5"<< endl;

    }

}
void UI::add()
{
    Service s;

    string sName;
    string sLast;
    string sGender;
    int sBorn;
    int sDeath;
    int number;
    cout << "How many scientist you wan to add ? ";
    cin >> number;

    for (int i = 0; i < number; i++){
    cout << "First name: ";
    cin >> sName;
    cout << "Last name: ";
    cin >> sLast;
    cout << "Gender: ";
    cin >> sGender;
    cout << "Born: ";
    cin >> sBorn;
    cout << "Death: ";
    cin >> sDeath;

    Scientist temp(sName, sLast, sGender, sBorn, sDeath);
    s.add(temp);
    }

}

void UI::search()
{
    vector<Scientist> temp;
    Service s;
    string word;
    cout << "Search for: ";
    cin >> word;
    temp = s.Search(word);
    PrintData(temp);
}

void UI::SaveFile(){
    Service temp;
    temp.SaveFile();


}


