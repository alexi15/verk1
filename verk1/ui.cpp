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
    cout << "Press 1 to sort by first name " << endl;
    cout << "Press 2 to sort by last name" << endl;
    cout << "Press 3 to sort by gender" << endl;
    cout << "Press 4 to sort by birth" << endl;
    cout << "Press 5 to sort by death" << endl;


    cin >> input;

    switch(input)
    {
        case 1:
            PrintData(temp.SortStringList(input));
            break;
        case 2:
           PrintData(temp.SortStringList(input));
            break;
        case 3:
           PrintData(temp.SortStringList(input));
            break;
        case 4:
           PrintData(temp.SortNumbersList(input));
            break;
        case 5:
            PrintData(temp.SortNumbersList(input));
            break;
        default:
           cout << "Error in input" << endl;
           cout << "Please choose a number between 1 to 5"<< endl;

    }

}
void UI::add()
{
    Service temp;
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

    Scientist tempSci(sName, sLast, sGender, sBorn, sDeath);
    temp.add(tempSci);
    }

}

void UI::search()
{
    Service temp;
    vector<Scientist> Vec;
    string word;
    cout << "Search for: ";
    cin >> word;
    Vec = temp.Search(word);
    PrintData(Vec);
}

void UI::SaveFile(){
    Service temp;
    temp.SaveFile();
}


