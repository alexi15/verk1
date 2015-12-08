#include "computers.h"

Computer::Computer()
{

}

Computer::Computer(int ID, string nam, int year, string Type, string Made){

    id = ID;
    name = nam;
    BuildYear = year;
    type = Type;
    made = Made;
}

Computer::Computer(string nam, int year, string Type, string Made)
{
    name = nam;
    BuildYear = year;
    type = Type;
    made = Made;
}

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


string Computer::getStrings(int tala)
{
    if (tala == 1){
        return getName();
    }
    else if (tala == 3){
        return getType();
    }
    else if (tala == 4){
        return getMade();
    }
    return 0;

}
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
