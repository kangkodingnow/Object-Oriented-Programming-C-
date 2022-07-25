#ifndef __PLAYER
#define __PLAYER
#include <string>
#include <iostream>
using namespace std;

class Player{
    private:
        string name;
        double attackPower;
        int level;
        int exp;

    public:
        Player(const char *name);

        // getter, ini artinya kita akan membuat attribut read only
        string getName();
        // setter, ini untuk write data ke class
        void addExperience(int);

        void display();
};


#endif