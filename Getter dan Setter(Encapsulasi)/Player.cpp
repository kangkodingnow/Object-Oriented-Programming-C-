#include <iostream>
#include <string>
#include "Player.hpp"

using namespace std;

Player::Player(const char* name){
    this->name = name;
    this->level = 1;
    this->exp = 0;
    this->attackPower = 100;
}

// getter, ini artinya kita akan membuat attribut read only
string Player::getName(){
    return this->name;
}

// setter, ini untuk write data ke class
void Player::addExperience(int expValue){
    int maxExp = 100;
    cout << "mendapatkan exp = " << expValue << endl;
    this->exp += expValue;
    if(this->exp >= maxExp){
        // maka level up
        this->level++;
        this->attackPower += 100;
        cout << "Level Up" << endl;
        this->exp -= 100;
    }
}

void Player::display(){
    cout << "Name\t: " << this->name << endl;
    cout << "Level\t: " << this->level << endl;
    cout << "exp\t: " << this->exp << endl;
    cout << "Attack\t: " << this->attackPower << endl;
}