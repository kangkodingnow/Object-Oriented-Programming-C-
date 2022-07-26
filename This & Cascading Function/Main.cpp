#include <iostream>
#include <string >

using namespace std;

class Player{
    private:
        string nama_depan;
        string nama_tengah;
        string nama_belakang;

    public:
        Player(){
            nama_depan = "depan"; // menggunakan teknik inplisit
            this->nama_tengah = "tengah"; // teknik eksplisit dengan menggunakan pointer this dan arrow
            (*this).nama_belakang = "belakang"; // dereference this pointer dan dot operator
        }

        // kita bisa melakukan cascade function calls dengan *this
        Player& setNamaDepan(const char* depan){
            this->nama_depan = depan;
            return *this;
        }

        Player& setNamaBelakang(const char* belakang){
            (*this).nama_belakang = belakang;
            return *this;
        }

        Player& setNamaTengah(const char* tengah){
            (*this).nama_tengah = tengah;
            return *this;
        }

        void display(){
            cout << "Nama: " << nama_depan;
            cout << " " << this->nama_tengah;
            cout << " " << (*this).nama_belakang << endl;
        }
};

int main(int argc, char const *argv[])
{
    Player *player1 = new Player();
    player1->display();

    player1->setNamaDepan("ucup");
    player1->setNamaBelakang("surucup");
    player1->setNamaTengah("dangerous");
    (*player1).setNamaDepan("Otong").setNamaTengah("the best").setNamaBelakang("duarr");
    player1->display();

    //cascade function call
    //player1->setNamaDepan("Otong").setNamaTengah("the best").setNamaBelakang("Otong surotong");

    Player player2 = Player();
    player2.setNamaDepan("ucup").setNamaBelakang("surucup").setNamaTengah("dangerous");
    player2.display();

    return 0;
}
