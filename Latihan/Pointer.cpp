#include <iostream>
#include <string>

using namespace std;

void fungsi(string *hijau){
    string h = "abang";
    string temp = h + *hijau;
    cout << &hijau << endl;
    cout << *hijau << endl;
    cout << temp << endl;
}

int main(int argc, char const *argv[])
{
    string a;
    a = "aku bukanlah manusia biasa";
    cout << &a << endl;
    fungsi(&a);

    return 0;
}
