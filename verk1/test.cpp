#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream File1;
    File1.open("No.txt");
    if(File1.fail())
    {
        cout << "villa";
    }
}
