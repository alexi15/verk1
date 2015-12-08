#include "ui.h"

UI::UI()
{

}

//Display function
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
//This function asks the user what he wants the program to do
void UI::start()
{
    int number;

    while(true){
    cout << "-------What do you want to do-------" << endl;
    cout << "Do you want to add, sort, save or search? " << endl;
    cout << "Press 1 to add" << endl;
    cout << "Press 2 to sort" << endl;
    cout << "Press 3 to search" << endl;
    cout << "Press 4 to save" << endl;
    cout << "Press 5 to exit" << endl;

    while(!(cin >> number)){
        cin.clear();
        cin.ignore(6, '\n');
        cout << "Error in input" << endl;
        cout << "Please choose a number between 1 to 5"<< endl;
    }

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
        case 5:
            cout << " --- Until next time ---" << endl;
            exit(0);
            break;
        default:
           cout << "Error in input" << endl;
           cout << "Please choose a number between 1 to 5"<< endl;
        }
    }
}

//This function asks the user how he wants to sort the data
void UI::ChooseSort()
{

    vector<Scientist>Database;
    int input;
    do{
    cout << "Press 1 to sort by first name " << endl;
    cout << "Press 2 to sort by last name" << endl;
    cout << "Press 3 to sort by gender" << endl;
    cout << "Press 4 to sort by birth" << endl;
    cout << "Press 5 to sort by death" << endl;

    while(!(cin >> input)){
        cin.clear();
        cin.ignore(6, '\n');
        cout << "Error in input" << endl;
        cout << "Please choose a number between 1 to 5"<< endl;
    }

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
    }while(input > 5 || input < 1);

}
//This function allows the user to add information to the database
void UI::add()
{
    string sName;
    string sLast;
    string sGender;
    int sBorn;
    int sDeath;
    int number;
    cout << "How many scientist do you want to add ? ";
    cin >> number;

    for (int i = 0; i < number; i++){
    cout << "First name: ";
    cin >> sName;
    cout << "Last name: ";
    cin >> sLast;
    cout << "Gender: ";
    cin >> sGender;
    cout << "Born: ";
    while(!(cin >> sBorn)){
        cin.clear();
        cin.ignore(3000, '\n');
        cout << "Invalid input, try again" << endl << "Born: ";
    }
    cout << "Death(if not dead input 0): ";
    while(!(cin >> sDeath)){
        cin.clear();
        cin.ignore(0, '\n');
        cout << "Invalid input, try again" << endl << "Dead: ";
    }
    Scientist tempSci(sName, sLast, sGender, sBorn, sDeath);

    if(!(temp.add(tempSci)))
        cout << "Error, could not add scientist";
    cout << endl;
    }
}
//This function allows the user to search in the database
void UI::search()
{
    string word;
    cout << "Search for: ";
    cin >> word;
    if(!temp.Search(word).size())
        cout << "Could not find " << word << " in file" << endl;
    else
        cout << "Scientists found: " << endl;
        PrintData(temp.Search(word));
}

void UI::SaveFile(){
    temp.SaveFile();
    cout << "File was saved" << endl;
}


