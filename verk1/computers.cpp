#include "computers.h"

Computers::Computers()
{

}

Computers::Computers(string nam, int year, string Type, string Made){

    name = nam;
    BuildYear = year;
    type = Type;
    made = Made;


}

string Computers::getName(){

    return name;
}

int Computers::getBuildYear(){

    return BuildYear;
}

string Computers::getType(){

    return type;
}

string Computers::getMade(){

    return made;
}
string Computers::getStrings(int tala){
    if (tala == 1){
        return getName();
    }
    else if (tala == 3){
        return getType();
    }
    else if (tala == 4){
        return getMade();
    }


}
