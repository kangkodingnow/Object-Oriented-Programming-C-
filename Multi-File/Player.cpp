#include "Player.h"
#include <iostream>
#include <string>

using namespace std;
// penjabaran method
Player::Player(const char* name){
    this->name = name;
}

void Player::display(){
    cout << "Nama Player: " << this->name << endl;
}

string Player::getName(){
    return this->name;
}

void Player::setName(const char* name){
    this->name = name;
}