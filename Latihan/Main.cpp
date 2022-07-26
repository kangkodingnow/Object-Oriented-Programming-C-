#include <iostream>
#include <string>
using namespace std;

class Hero{
    private:
        string nama;
        double health;
    
    public:
        // Hero(const char* nama, double health){
        //     Hero::nama = nama;
        //     Hero::health = health;
        //     cout << this << endl;
        //     cout << Hero::nama << endl;
        //     cout << Hero::health << endl;
        // }

        Hero(const char* nama, double health){
            Hero::nama = nama;
            this->health = health;

            //alamat dari variabel berada di stack, sedangkan isinya ada di heap
            cout << &nama << endl;
            cout << &health << endl;

            //operator this menunjukan alamat pertama yang akan diisi oleh class
            cout << this << endl;
            
            //alamat berada pada heap
            cout << (&this->nama) << endl;//berisi alamat dari this
            cout << (&this->health) << endl;
            cout << Hero::nama << endl;
            cout << Hero::health << endl;
            cout << endl;
            cout << &nama << endl;
            cout << &health << endl;
        }
};

int main(int argc, char const *argv[])
{
    string a, b, c;
    a = "bergabung";
    cout << &a << endl;
    cout << &b << endl;
    cout << &c << endl;
    cout << endl;
    Hero* hero1 = new Hero("otong", 100);
    return 0;
}
