#include <iostream>
#include "Player.hpp"
#include "Weapon.hpp"

using namespace std;

Player::Player(const char * name){
    this->name = name;
    this->health = 100;
}

void Player::display(){
    cout << "\nName\t: " << this->name << endl;
    cout << "Health\t: " << this->health << endl;
    cout << "Weapon\t: " << this->weapon->getName() << endl;
    cout << "Power\t: " << this->weapon->getPower() << endl;
}

void Player::attack(Player* player){
    if(this->health <= 0){
        cout << this->name << " sudah meninggal" << endl;
        cout << this->name << " tidak dapat menyerang" << endl;
    }else{
        cout << endl << this->name << " menyerang " << player->getName() << endl;
        player->defence(this->weapon->getPower());
    }
}

//getter
string Player::getName(){
    return this->name;
}

//setter
void Player::equipWeapon(Weapon* weapon){
    this->weapon = weapon;
}

void Player::defence(double demage){
    this->health -= demage;
    cout << this->name << " mendapatkan demage : " << demage << endl;

    if(this->health <= 0){
        cout << this->name << " meninggal" << endl;
    }
}
