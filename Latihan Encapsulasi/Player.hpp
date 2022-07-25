#ifndef __PLAYER
#define __PLAYER
#include <string>
#include "Weapon.hpp"
using namespace std;

class Player{
    private:
        string name;
        double health;
        Weapon *weapon;

    public:
        Player(const char *);
        void display();
        void attack(Player *player);
        //getter
        string getName();
        //setter
        void equipWeapon(Weapon *);
    
    private:
        void defence(double);
};

#endif