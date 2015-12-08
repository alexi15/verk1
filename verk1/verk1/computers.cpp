#include "computers.h"

//default constructor
Computer::Computer()
{

}

//constructor
Computer::Computer(int ID, string nam, int year, string Type, string Made)
{
    id = ID;
    name = nam;
    BuildYear = year;
    type = Type;
    made = Made;
}

//constructor
Computer::Computer(string nam, int year, string Type, string Made)
{
    name = nam;
    BuildYear = year;
    type = Type;
    made = Made;
}

//These get function return private parameters
string Computer::getName()
{
    return name;
}

int Computer::getBuildYear()
{
    return BuildYear;
}

string Computer::getType()
{
    return type;
}

string Computer::getMade()
{
    return made;
}

int Computer::getID()
{
    return id;
}

//This function used to sort strings
string Computer::getStrings(int tala)
{
    if (tala == 1)
    {
        return getName();
    }
    else if (tala == 3)
    {
        return getType();
    }
    else if (tala == 4)
    {
        return getMade();
    }
    return 0;

}

//This function used to sort integers
int Computer::getNumbers(int tala)
{
    if (tala == 2)
    {
        return getBuildYear();
    }
    if (tala == 5)
    {
        return getID();
    }
    return 0;
}

