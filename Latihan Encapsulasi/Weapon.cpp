#include <iostream>
#include "Weapon.hpp"
#include <string>
using namespace std;

Weapon::Weapon(const char * name, double attackPower){
    this->name = name;
    this->attackPower = attackPower;
}

//getter
double Weapon::getPower(){
    return this->attackPower;
}
string Weapon::getName(){
    return this->name;
}