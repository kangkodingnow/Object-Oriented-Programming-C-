#include <iostream>
#include <string>

using namespace std;

// data member
class ClassTypes{
    public:
        string dataStr;
        double dataDouble;
        double m_dataDouble;

        ClassTypes(const char* dataStr, double dataDouble){
            // dengan menggunakan namespace dari class
            ClassTypes::dataStr = dataStr;

            // dengan menggunakan "this"
            cout << this << endl; //memanggil alamat memory dari object dataStr
            this->dataDouble = dataDouble;

            //dengan menggunakan konvensi penamaan
            m_dataDouble = dataDouble;
        }
};

//member function
class Player{
    public:
        string nama;
        double power;
        int health;

        Player(const char* nama, double power){
            Player::setName(nama);
            this->power = power;
        }

        void setName(const char* nama){
            this->nama = nama;
        }

        void setPower(double power){
            this->power = power;
        }

        void setHealth(int);
};

void Player::setHealth(int health){
    this->health = health;
}
int main(int argc, char const *argv[])
{
    ClassTypes *object1 = new ClassTypes("object 1", 0.05);
    string coba;
    cout << object1 << endl; // memanggil alamat memory dari object object1
    cout << &object1 << endl; // memanggil alamat memory dari variabel object1
    cout << object1->dataStr << endl; 
    cout << object1->dataDouble << endl;
    cout << object1->m_dataDouble << endl;
    cout << &coba << endl; // memanggil alamat memory dari variabel coba

    Player *player1 = new Player("ucup", 100);
    cout << (*player1).nama << endl;
    cout << player1->nama << endl;
    cout << (*player1).power << endl;
    cout << player1->power << endl;

    player1->setHealth(10);
    cout << player1->health << endl;

    return 0;
}
