#include "ui.h"

UI::UI()
{

}

//display function scientist ATH réttur vector
void UI::PrintDataScientist(vector<Scientist>Sorted){

    for(unsigned int i = 0; i < Sorted.size(); i++){
        cout << "ID: " << Sorted[i].getID() << endl;
        cout << "   Name: " << Sorted[i].getFirstName() << endl;
        cout << "   Lastname: " << Sorted[i].getLastName() << endl;
        cout << "   Gender: " << Sorted[i].getSex() << endl;
        cout << "   YearBorn: " << Sorted[i].getYearBorn() << endl;
        cout << "   Death: " << Sorted[i].getYearDead() << endl;
        cout << endl;
    }
}
//display function computers ATH réttan vector vector<Computer>ComputerService
void UI::PrintDataComputers(vector<Computer>Sorted){

    for(unsigned int i = 0; i < Sorted.size(); i++){
        cout << " ID: " << Sorted[i].getID() << endl;
        cout << "   Name: " << Sorted[i].getName() << endl;
        cout << "   Build Year: " << Sorted[i].getBuildYear() << endl;
        cout << "   Type: " << Sorted[i].getType() << endl;
        cout << "   Made: " << Sorted[i].getMade() << endl;
        cout << endl;
    }
}


void UI::printSciName()
{
    for(unsigned int i = 0; i < scient.getVec().size(); i++){
        cout << " ID: " << scient.getVec()[i].getID() << endl;
        cout << " Name: " << scient.getVec()[i].getFirstName() << " "
        << scient.getVec()[i].getLastName() << endl;
    }
}

void UI::printComName()
{
    for(unsigned int i = 0; i < com.getVec().size(); i++){
        cout << " ID: " << com.getVec()[i].getID() << endl;
        cout << "   Name: " << com.getVec()[i].getName() << endl;
    }
}

//
int UI::start()
{
    int number;

    cout << "=========================What do you want to do=========================" << endl;
    cout << "Do you want to look at scientists, computers or relations between them? " << endl;
    cout << "Press 1 for scientists" << endl;
    cout << "Press 2 for computers" << endl;
    cout << "Press 3 for relations" << endl;

    while(!(cin >> number)){
        cin.clear();
        cin.ignore(4, '\n');
        cout << "Error in input" << endl;
        cout << "Please choose a number between 1 to 3"<< endl;
    }


    return number;
}

//This function asks the user what he wants the program to do
void UI::NextStep()
{
    while(true){
    int number = start();
    int input;

    cout << "------------------What do you want to do-------------------" << endl;
    if (number == 1 || number == 2){
        cout << "Do you want to add, sort, edit, remove, search or display? " << endl;
        cout << "Press 1 to add" << endl;
        cout << "Press 2 to sort" << endl;
        cout << "Press 3 to remove" << endl;
        cout << "Press 4 to edit" << endl;
        cout << "Press 5 to search" << endl;
        cout << "Press 6 to display" << endl;

        while(!(cin >> input)){
            cin.clear();
            cin.ignore(7, '\n');
            cout << "Error in input" << endl;
            cout << "Please choose a number between 1 to 6"<< endl;
    }
    }
    else if (number == 3){
        cout << "Do you want to add, sort or remove? " << endl;
        cout << "Press 1 to add" << endl;
        cout << "Press 2 to sort" << endl;
        cout << "Press 3 to remove" << endl;


    while(!(cin >> input)){
        cin.clear();
        cin.ignore(4, '\n');
        cout << "Error in input" << endl;
        cout << "Please choose a number between 1 to 3"<< endl;
        }
    }

    switch(input)
    {
        case 1:
            if (number == 1)
                addScientist();
            else if (number == 2)
                addComputers();
            else if (number == 3)
                addRelations();
            break;
        case 2:
            if (number == 1)
                ChooseSortScientist();
            else if (number == 2)
                ChooseSortComputers();
            else if (number == 3)
                ChooseSortRelations();
            break;
        case 3:
            if (number == 1)
                RemoveSci();
            else if (number == 2)
                RemoveCom();
            else if (number == 3)
                RemoveRelation();
            break;
        case 4:
            if (number == 1)
                EditSci();
            else if (number == 2)
                EditCom();
            break;
        case 5:
            if (number == 1 || number == 2)
                search();
            break;
        case 6:
            if (number == 1)
                displayinfoSci();
            else if (number == 2)
                displayinfoCom();
            break;
        default:
            if(number == 1 || number == 2)
            {
                cout << "Error in input" << endl;
                cout << "Please choose a number between 1 to 6"<< endl;
            }
            else if(number == 3)
            {
                cout << "Error in input" << endl;
                cout << "Please choose a number between 1 to 3"<< endl;
            }
    }

    }

}

void UI::displayinfoSci(){

    int number;
    int size = scient.getVec().size();
    cout << "There are " << size  <<" scientist in the database." << endl;
    cout << "To cancel please press 0" << endl;
    cout << "How many do you want to display? ";


    while(!(cin >> number) && (size < number)){
        cin.clear();
        cin.ignore(scient.getVec().size() + 1, '\n');
        cout << "Error in input" << endl;
        cout << "Please choose a number smaller or equal to "<< scient.getVec().size() << endl;
    }
    if (size < number)
        number = size;
    for (int i = 0; i < number; i++)
    {
        cout << "ID: " << scient.getVec()[i].getID() << endl;
        cout << "   Name: " << scient.getVec()[i].getFirstName() << endl;
        cout << "   Lastname: " << scient.getVec()[i].getLastName() << endl;
        cout << "   Gender: " << scient.getVec()[i].getSex() << endl;
        cout << "   YearBorn: " << scient.getVec()[i].getYearBorn() << endl;
        cout << "   Death: " << scient.getVec()[i].getYearDead() << endl;
        cout << endl;
    }

}
void UI::displayinfoCom(){

    int number;
    int size = com.getVec().size();
    cout << "There are " << size <<" computer in the database." << endl;
    cout << "To cancel please press 0" << endl;
    cout << "How many do you want to display? ";


    while(!(cin >> number))
    {
        cin.clear();
        cin.ignore(com.getVec().size() + 1, '\n');
        cout << "Error in input" << endl;
        cout << "Please choose a number smaller or equal to "<< com.getVec().size() << endl;
    }
    if (size < number)
        number = size;


    for (int i = 0; i < number; i++)
    {
        cout << " ID: " << com.getVec()[i].getID() << endl;
        cout << "   Name: " << com.getVec()[i].getName() << endl;
        cout << "   Build Year: " << com.getVec()[i].getBuildYear() << endl;
        cout << "   Type: " << com.getVec()[i].getType() << endl;
        cout << "   Made: " << com.getVec()[i].getMade() << endl;
        cout << endl;
    }

}


//This function allows the user to add information to the scientist database
void UI::addScientist()
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

        if(!(scient.add(tempSci)))
            cout << "Error, could not add scientist";
        cout << endl;
    }
}

//This function allows the user to add information to the computers database
void UI::addComputers()
{
    string sName;
    int sBuildYear;
    string sType;
    string sMade;//hvað á notandin að inputa hér, yes eða no - villuchecka

    int number;
    cout << "How many computers do you want to add ? ";
    cin >> number;

    for (int i = 0; i < number; i++)
    {
        cout << "Name of the computer: ";
        cin >> sName;
        cout << "Build Year(if not build input 0): ";
        while(!(cin >> sBuildYear)){
            cin.clear();
            cin.ignore(0, '\n');
            cout << "Invalid input, try again" << endl << "Build Year: ";
        }
        cout << "Computers Type: ";
        cin >> sType;
        cout << "Was the computer made? ";
        while(true){
            cin >> sMade;
            if(sMade != "Yes" && sMade != "yes" && sMade != "No" && sMade != "no")
                cout << "Invalid input, try again" << endl << "Made: ";
            else break;
        }

        Computer tempcom(sName, sBuildYear, sType, "sMade");

        if(!(com.add(tempcom)))
            cout << "Error, could not add computer";
        else
            cout << "Computer succesfully added" << endl;
    }
}


//This function allows the user to add information to the relations database
void UI::addRelations()
{
    int comID;
    int sciID;
    int number;
    cout << "How many relations do you want to add ? ";
    cin >> number;

    for (int i = 0; i < number; i++){
        printSciName();
        cout << "What scientist do you want to add realtions to? ";
        cin >> sciID;
        printComName();
        cout << "To what computer do you want to relate him to? ";
        cin >> comID;
        if(!com.addRelations(comID, sciID))
            cout << "Could not add relations!" << endl;
        else
            cout << "Relation succesfully added!" << endl;
    }


}



//This function asks the user how he wants to sort the scientist data
void UI::ChooseSortScientist()
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
            PrintDataScientist(scient.SortStringList(input));
            break;
        case 2:
           PrintDataScientist(scient.SortStringList(input));
            break;
        case 3:
           PrintDataScientist(scient.SortStringList(input));
            break;
        case 4:
           PrintDataScientist(scient.SortNumbersList(input));
            break;
        case 5:
            PrintDataScientist(scient.SortNumbersList(input));
            break;
        default:
           cout << "Error in input" << endl;
           cout << "Please choose a number between 1 to 5"<< endl;
    }
    }while(input > 5 || input < 1);

}
//This function asks the user how he wants to sort the computers data
void UI::ChooseSortComputers()
{
    vector<Scientist>Database;//hvada vector
    int input;
    do{
    cout << "Press 1 to sort by name " << endl;
    cout << "Press 2 to sort by build year" << endl;
    cout << "Press 3 to sort by computers type" << endl;
    cout << "Press 4 to sort by made" << endl;

    while(!(cin >> input)){
        cin.clear();
        cin.ignore(4, '\n');
        cout << "Error in input" << endl;
        cout << "Please choose a number between 1 to 3"<< endl;
    }

    switch(input)
    {
        case 1:
            PrintDataComputers(com.SortStringList(input));
            break;
        case 2:
           PrintDataComputers(com.SortNumbersList(input));
            break;
        case 3:
           PrintDataComputers(com.SortStringList(input));
            break;
        case 4:
            PrintDataComputers(com.SortStringList(input));
        default:
           cout << "Error in input" << endl;
           cout << "Please choose a number between 1 to 3"<< endl;
    }
    }while(input > 3 || input < 1);

}


//This function asks the user how he wants to sort the relations data
void UI::ChooseSortRelations()
{
  //  vector<Scientist>Database;//hvada vector
    int input;
    int idInput;
    do{
         cout << "Press 1 to sort by computer name" << endl;
         cout << "Press 2 to sort by scientist name" << endl;

    while(!(cin >> input)){
        cin.clear();
        cin.ignore(3, '\n');
        cout << "Error in input" << endl;
        cout << "Please choose a number between 1 to 2"<< endl;
    }

    switch(input)
    {
        case 1:
        printComName();
        cout << "Select the ID of the computers you want to look at ";
        cin >> idInput;
        PrintDataScientist(scient.getScientistVec(com.getComRel(idInput)));
            break;
        case 2:
            printSciName();
            cout << "Select the ID of the scientist you want to look at ";
            cin >> idInput;
            PrintDataComputers(com.getComputerVec(scient.getSciRel(idInput)));
            break;
        default:
           cout << "Error in input" << endl;
           cout << "Please choose a number between 1 to 2"<< endl;
    }
    }while(input > 2 || input < 1);


}


//This function allows the user to search in the database
void UI::search(){
    string word;
    cout << "Search for: ";
    cin >> word;
    if(!scient.Search(word).size())
        cout << "Could not find " << word << " in file" << endl;
    else
        cout << "Scientists found: " << endl;
        PrintDataScientist(scient.Search(word));
}

void UI::RemoveSci()
{
    int Id;
    printSciName();

    cout << "Please Insert Id number of wich scientist you would like to remove: " << endl;
    cout << "To cancel please press 0" << endl;
    while(!(cin >> Id || Id != 0)){
        cin.clear();
        cin.ignore(6, '\n');
        cout << "Error in input" << endl;
        cout << "Please choose Valid Id Number"<< endl;

    }
    if (Id > 0)
    {
        scient.Remove(Id);
    }
    else
    {
        start();
    }
}

void UI::RemoveCom()
{
    int Id;
    printComName();

    cout << "Please Insert Id number of wich computer you would like to remove: " << endl;
    cout << "To cancel please press 0" << endl;
    while(!(cin >> Id || Id != 0)){
        cin.clear();
        cin.ignore(6, '\n');
        cout << "Error in input" << endl;
        cout << "Please choose Valid Id Number"<< endl;

    }
    if (Id > 0)
    {
        com.Remove(Id);
    }
    else
    {
      //  start();
    }
}

void UI::RemoveRelation()
{
    int comID;
    int sciID;

    printSciName();

    cout << "Please Insert Id number of wich scientist you would like to remove relations to: " << endl;
    cout << "To cancel please press 0" << endl;
    while(!(cin >> sciID || sciID != 0)){
        cin.clear();
        cin.ignore(6, '\n');
        cout << "Error in input" << endl;
        cout << "Please choose Valid Id Number"<< endl;
    }
    PrintDataComputers(com.getComputerVec(scient.getSciRel(sciID)));
    cout << "Please Insert Id number of wich computer you would like to remove relations to: " << endl;
    cout << "To cancel please press 0" << endl;
    while(!(cin >> comID || comID != 0)){
        cin.clear();
        cin.ignore(6, '\n');
        cout << "Error in input" << endl;
        cout << "Please choose Valid Id Number"<< endl;
    }
    if (comID > 0)
    {
        com.removeRelation(comID, sciID);
    }
    else
    {
        //NextStep();
    }
}
void UI::EditSci()
{
    int inputId;
    int inputEdit;
    string temp;
    vector<int>Id;
    PrintDataScientist(scient.getVec());
    cout << "Please Select Scientist you would like to edit: ";
    cin >> inputId;
    Id.push_back(inputId);
    PrintDataScientist(scient.getScientistVec(Id));
    cout << "What do you want to edit" << endl;
    cout << "Press 1 for Name" << endl;
    cout << "Press 2 for Lastname" << endl;
    cout << "Press 3 for Gender" << endl;
    cout << "Press 4 for year born" << endl;
    cout << "Press 5 for year died" << endl;
    cin >> inputEdit;

    switch(inputEdit)
    {
        case 1:
                cout << "Please enter new name: ";
                cin >> temp;
                scient.Edit(temp,inputId, inputEdit);

            break;
        case 2:
                cout << "Please enter new last name: ";
                cin >> temp;
                scient.Edit(temp,inputId,inputEdit);
            break;
        case 3:
                cout << "Please enter new gender: ";
                cin >> temp;
                scient.Edit(temp,inputId, inputEdit);
            break;
        case 4:
                cout << "Please enter year born: ";
                cin >> temp;
               scient.Edit(temp,inputId, inputEdit);
            break;
        case 5:
                 cout << "Please enter year died: ";
                 cin >> temp;
                 scient.Edit(temp,inputId, inputEdit);
             break;

    }
}

void UI::EditCom()
{

        int inputId;
        int inputEdit;
        string temp;
        vector<int>Id;
        PrintDataComputers(com.getVec());
        cout << "Please select computer you would like to edit: ";
        cin >> inputId;
        Id.push_back(inputId);
        PrintDataComputers(com.getComputerVec(Id));
        cout << "What do you want to edit" << endl;
        cout << "Press 1 for Name" << endl;
        cout << "Press 2 for Build Year" << endl;
        cout << "Press 3 for Type" << endl;
        cout << "Press 4 for Made" << endl;
        cin >> inputEdit;

        switch(inputEdit)
        {
            case 1:
                    cout << "Please enter new name: ";
                    cin >> temp;
                    com.Edit(temp,inputId, inputEdit);

                break;
            case 2:
                    cout << "Please enter new build year: ";
                    cin >> temp;
                    com.Edit(temp,inputId,inputEdit);
                break;
            case 3:
                    cout << "Please enter new type: ";
                    cin >> temp;
                    com.Edit(temp,inputId, inputEdit);
                break;
            case 4:
                    cout << "Please enter made: ";
                    cin >> temp;
                    com.Edit(temp,inputId, inputEdit);
                break;
        }
}
