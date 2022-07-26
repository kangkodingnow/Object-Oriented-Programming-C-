#include <iostream>
#include <string>

using namespace std;

class Hero{
    private:
        string name;

    public:
        Hero(const char* name){
            this->name = name;
        }

        void display() const{
            cout << "Name : " << this->name << endl;
        }

        //setter
        void setName(const char* name){
            this->name = name;
        }

        //getter
        string getName()const{
            return this->name;
        }

        //member function ini tidak akan bisa, karena attribut tidak const
        // void setName(const char* name) char{
        //     this->name = name;
        // }
};


int main(int argc, char const *argv[])
{
    Hero hero1 = Hero("Otong");
    const Hero hero2 = Hero("Ucup"); //object konstan tidak bisa kita rubah 
    hero1.display();
    hero1 = Hero("Mario");
    hero1.display();
    hero1.setName("Saitama");
    hero1.display();

    // harus matching, kalau semisal kita punya const hero berarti method yang dipanggil juga harus const juga
    //tetapi jika hero tidak constant, maka methodnya tidak harus constan
    hero2.display();
    // hero2 = Hero("Mario")// ini tidak bisa
    hero2.display();
    // hero2.setName("Mario"); // ini tidak bisa
    hero2.display();

    cout << hero2.getName() << endl; //karena member function const dan tidak merubah apapun didalam method
    /*kesimpulan
    1. jika objectnya tidak const, maka seluruh member bisa dipanggil 
    2. jika objectnya const, maka hanya member function/method yang const yang dapat dipanggil
    */

    return 0;
}
