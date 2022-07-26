#ifndef __WEAPON
#define __WEAPON
#include <string>
#include <iostream>

using namespace std;

class Weapon{
    private:
        string name;
        double attackPower;

    public:
        Weapon(const char *, double);
        
        //getter, read only
        double getPower();
        string getName();
};

#endif