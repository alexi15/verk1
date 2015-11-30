#include "ui.h"

UI::UI()
{

}

void UI::SortData(vector<Scientist>Sorted){
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
    cout << "-------What do you want to do-------" << endl;
    cout << "Do you want to add, sort or search? " << endl;
    cout << "Press 1 to add" << endl;
    cout << "Press 2 to sort" << endl;
    cout << "Press 3 to search" << endl;
    cin >> number;

    switch(number)
    {
        case '1':
            ;
            break;
        case '2':
            ChooseSort();
            break;
        case '3': ;
            break;
        default:
           cout << "Error in input" << endl;
           cout << "Please choose a number between 1 to 3"<< endl;

    }
}
void UI::ChooseSort()
{
    int input;
    cout << "Press 1 to sort by first name " << endl;
    cout << "Press 2 to sort by gender" << endl;
    cout << "Press 3 to sort by death" << endl;
    cout << "Press 4 to sort by birth" << endl;
    cout << "Press 5 to sort by last name" << endl;
    cin >> input;

    switch(input)
    {
        case '1':  ;
            break;
        case '2': ;
            break;
        case '3': ;
            break;
        case '4': ;
            break;
        case '5': ;
            break;
        default:
           cout << "Error in input" << endl;
           cout << "Please choose a number between 1 to 5"<< endl;

    }

}



