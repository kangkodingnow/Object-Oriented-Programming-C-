#include <iostream>
#include <string>
#include "Player.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Player player1 = Player("yve"); // ini adalah object di stack
    player1.display();

    // implementasi dari getter
    cout << player1.getName() << endl;
    //player1.name = "Luna"; // tidak bisa karena variabel name adalah private

    // kegiatan bertarung
    cout << "Ketika Bertarung" << endl;
    player1.addExperience(25);// ini adalah setter
    player1.display();
    player1.addExperience(50);
    player1.display();
    player1.addExperience(25);
    player1.display();
    player1.addExperience(10);
    player1.display();

    // hasilnya
    player1.display();

    // kegiatan bertarung lagi
    cout << "Ketika Bertarung" << endl;
    player1.addExperience(25);// ini adalah setter
    player1.display();
    player1.addExperience(50);
    player1.display();
    player1.addExperience(25);
    player1.display();
    player1.addExperience(10);
    player1.display();

    cin.get();
    return 0;
}
