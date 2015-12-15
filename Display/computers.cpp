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
