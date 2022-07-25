#include <iostream>
#include <string>

// eksternal definition
#include "Player.h"
using namespace std;


int main(int argc, char const *argv[])
{
    Player *playerObject = new Player("Farhan");
    playerObject->display();

    cout << "get name : " << playerObject->getName() << endl;

    cout << "ubah nama" << endl;
    playerObject->setName("Isabella");
    playerObject->display();
    return 0;
}


