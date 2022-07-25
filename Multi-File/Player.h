#ifndef __PLAYER
#define __PLAYER
#include <string>

using namespace std;

// Deklarasi class
class Player{
    public:
        string name;

        // Constructor
        // prototype
        Player(const char *); // dalam bentuk prototype
        void display();
        string getName();
        void setName(const char*);

};

#endif