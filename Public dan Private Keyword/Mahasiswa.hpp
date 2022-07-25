#ifndef __MAHASISWA
#define __MAHASISWA

#include <string>
#include <iostream>
using namespace std;

class Mahasiswa{
    // Attribut
    public: // ini dapat diakses oleh siapapun
        string namePublic;

    private: //ini hanya dapat diakses oleh class itu sendiri
        string namePrivate;

    //methods dan constructor
    public: 
        //constructor selalu di public
        Mahasiswa(const char* name){
            this->namePublic = name;
            this->namePrivate = name;
        }

        void showDisplay(){
            cout << "Nama Mahasiswa: " << this->namePrivate << endl;
        }

    private:
        void showDisplayPrivate(){
            cout << "Nama Mahasiswa: " << this->namePrivate << endl;
        }
};

#endif