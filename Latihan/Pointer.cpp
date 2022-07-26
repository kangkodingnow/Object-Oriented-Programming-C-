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
    string a, b;
    a = " saya hebat";
    int c, d;
    cout << &a << endl;

    fungsi(&a);

    return 0;
}
