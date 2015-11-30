#ifndef PERSONUR
#define PERSONUR

struct per{
    String name;
    String sex;
    int yearBorn;
    int yearDead;
};

class personur
{
public:
    friend istream& operator >>(istream& int, vector<per> );
private:


};

#endif // PERSONUR

