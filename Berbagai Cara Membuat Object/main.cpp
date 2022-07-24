#include <iostream>
#include <string>

using namespace std;

class DenganConstructor{
    public:
        string data;

        DenganConstructor(const char* data){
            DenganConstructor::data = data;
        }

        void show(){
            cout << "ini " << DenganConstructor::data << endl;
        }
};

class TanpaConstructor{
    public:
        string data;
        void show(){
            cout << "ini " << TanpaConstructor::data << endl;
        }
};

int main(int argc, char const *argv[])
{
    //1. Cara membuat object tanpa constructor
    TanpaConstructor object1;
    object1.data = "object 1";
    object1.show();

    //2. cara membuat object dengan constructor
    DenganConstructor object2 = DenganConstructor("object 2");
    object2.show();

    //3. cara lain membuat object dengan constructor
    DenganConstructor object3("object 3");
    object3.show();

    //4. cara membuat object pada heap memory
    DenganConstructor* object4 = new DenganConstructor("object 4");
    (*object4).show();
    object4->show(); //dengan cara dereference
    cout << object4->data << endl; //arrow operator. mapping function atau attribut
    string data = object4->data;
    cout << data << endl;

    //why?
    // DenganConstructor object5;
    // object5 = DenganConstructor("object 5");
    // object5.show();
    // program diatas tidak bisa dijalankan karena kalau dengan constructor maka deklarasinya harus langsung dengan inisialisasinya seperti line 35
    //tapi kalau ingin didekalarasi dulu maka harus pakai pointer
    //contoh

    DenganConstructor* object5;
    object5 = new DenganConstructor("object 5");
    (*object5).show();
    object5->show();

    //PERHATIKAN! misal kita punya arrow operator object->fungsi
    //jika menggunakan arrow operator maka si object harus berupa pointer

    return 0;
}
