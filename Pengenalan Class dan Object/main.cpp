#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;
        double IPK;
};

int main(int argc, char const *argv[])
{
    Mahasiswa data1;
    data1.nama = "ucup";
    data1.NIM = "105221036";
    data1.jurusan = "kehutanan";
    data1.IPK = 3.8;

    Mahasiswa data2;
    data2.nama = "otong";
    data2.NIM = "105221030";
    data2.jurusan = "Ilmu Komputer";
    data2.IPK = 4;
    
    cout << "Nama dari data1: " << data1.nama << endl;
    cout << "NIM dari data1 : " << data1.NIM << endl;
    cout << "Jurusan dari data1: " << data1.jurusan << endl;
    cout << "IPK dari data1: " << data1.IPK << endl;

    cout << "\n" << endl;

    cout << "Nama dari data2: " << data2.nama << endl;
    cout << "NIM dari data2 : " << data2.NIM << endl;
    cout << "Jurusan dari data2: " << data2.jurusan << endl;
    cout << "IPK dari data2: " << data2.IPK << endl;
    return 0;
}
