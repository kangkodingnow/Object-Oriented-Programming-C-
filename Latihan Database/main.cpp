#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;

        Mahasiswa(string nama, string NIM, string jurusan){
            Mahasiswa::nama = nama;
            Mahasiswa::NIM = NIM;
            Mahasiswa::jurusan = jurusan;
        }

        string stringify(){
            return nama + " " + NIM + " " + jurusan + "\n";
        }
};

class Dbase{
    public:
        ifstream in;
        ofstream out;
        string fileName;

        Dbase(const char* fileName){
            Dbase::fileName = fileName;
        }

        void save(Mahasiswa data){
            cout << data.nama << endl;
            cout << data.NIM << endl;
            cout << data.jurusan << endl;

            Dbase::out.open(Dbase::fileName, ios::app);
            Dbase::out << data.stringify();
            Dbase::out.close();
        }

        void showAll(){
            Dbase::in.open(Dbase::fileName, ios::in);
            string nama[100], NIM[100], jurusan[100];
            int index{0};

            while(!Dbase::in.eof()){
                Dbase::in >> nama[index];
                Dbase::in >> NIM[index];
                Dbase::in >> jurusan[index];
                index++;
            }
            for (int i = 0; i < index-1; i++){
                cout << i+1 << ". " << nama[i] << "\t" << NIM[i] << "\t" << jurusan[i] << endl;
            }
            Dbase::in.close();
        }
};

int main(int argc, char const *argv[])
{

    //input user
    string nama, NIM, jurusan;
    cout << "MASUKAN DATA MAHASISWA" << endl;
    cout << "Nama\t: ";
    cin >> nama;
    cout << "NIM\t: ";
    cin >> NIM;
    cout << "Jurusan\t: ";
    cin >> jurusan;

    
    //membuat object-object yang diperlukan
    Dbase database = Dbase("data.txt");
    Mahasiswa dataMahasiswa = Mahasiswa(nama, NIM, jurusan);
    //database.showAll();

    //save data ke database
    database.save(dataMahasiswa);

    //tampilan seluruh data di database
    database.showAll();
    
    return 0;
}