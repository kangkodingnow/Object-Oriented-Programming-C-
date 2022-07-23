#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;
        double IPK;

        //constructor dengan parameter
        Mahasiswa(string inputNama, string inputNIM, string inputJurusan, double inputIPK){
            Mahasiswa::nama = inputNama;
            Mahasiswa::NIM = inputNIM;
            Mahasiswa::jurusan = inputJurusan;
            Mahasiswa::IPK = inputIPK;

            cout << Mahasiswa::nama << endl;
            cout << Mahasiswa::NIM << endl;
            cout << Mahasiswa::jurusan << endl;
            cout << Mahasiswa::IPK << endl;
        }
};

int main(){
    Mahasiswa mahasiswa1 = Mahasiswa("ucup", "105221036", "ilmu komputer", 3.0);
    cout << endl;
    Mahasiswa mahasiswa2 = Mahasiswa("otong", "105220200", "ilmu peternakan", 3.9);


    return 0;
}