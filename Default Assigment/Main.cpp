#include <iostream>
#include <string>

using namespace std;

class Hero{
    private:
        string name;
        double health;
        double power;

    public:
        Hero(const char* name = "Player", double health = 100, double power = 10){
            this->name = name;
            this->health = health;
            this->power = power;
        }

        void display(){
            cout << "\nPlayer name = " << this->name << endl;
            cout << "Health = " << this->health << endl;
            cout << "Power = " << this->power << endl;
        }
};

int main(int argc, char const *argv[])
{

    Hero *hero1 = new Hero("Ucup", 125); //heap
    hero1->display();

    Hero hero2 = Hero(); // stack
    hero2.display();

    Hero hero3 = Hero("Otong"); // stack
    hero3.display();

    Hero* hero4 = new Hero("Surotong", 1000, 120); // heap
    hero4->display();

    string a, b, c;
    cout << &a << endl;
    cout << &b << endl;
    cout << &c << endl;
    cout << "\n\nAlamat memory pada Hero\n" << endl;
    cout << "Alamat memory stack di hero1 : " << &hero1 << endl;
    cout << "Alamat memory stack di hero2 : " << &hero2 << endl;
    cout << "Alamat memory stack di hero3 : " << &hero3 << endl;
    cout << "Alamat memory stack di hero4 : " << &hero4 << endl;
    cout << endl;
    cout << "Alamat memory heap di hero4 : " << hero4 << endl;
    cout << "Alamat memory heap di hero1 : " << hero1 << endl;

    return 0;
}
