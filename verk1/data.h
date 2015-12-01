#ifndef Data_H
#define Data_H
#include "Service.h"
#include <iostream>
#include <fstream>


class Data: public Scientist{
public:
    Data();
    void SaveFile(vector<Scientist>VecSave);
    vector<Scientist>getVector();
    void load();
private:
    vector<Scientist>scientist;
};

#endif // Data_H
