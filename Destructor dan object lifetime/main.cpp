#include <iostream>
#include <string>

using namespace std;

class Player{
    public: 
        string nama;

        //constructor
        Player(const char* nama){
            Player::nama = nama;
            cout << "Player " << Player::nama << " telah dibuat" << endl;
        }

        //destructor
        ~Player(){
            cout << "Player " << Player::nama << " dihapus" << endl;
        }
};

void membuatPlayerStuck(){
        Player stackPlayer = Player("stack");
}

void membuatPlayerHeap(){
        Player *heapPlayer = new Player("heap");
        delete heapPlayer;
}

void membuatPlayerStackPointer(Player* &playerPointer){
    Player stackPlayer = Player("stack");
    playerPointer = &stackPlayer;
}

void membuatPlayerHeapPointer(Player* &playerPointer){
    Player* heapPlayer = new Player("heap");
    playerPointer = heapPlayer;
    delete playerPointer;
}

Player* createHeapPlayer(){
    Player* HeapPlayer = new Player("heap di create");
    return HeapPlayer;
}

Player createStackPlayer(){
    Player stackPlayer = Player("stack di create");
    return stackPlayer;
}
int main(int argc, char const *argv[])
{
    membuatPlayerStuck();
    membuatPlayerHeap();

    //simulasi memory leak
    cout << "\nMemory Leak" << endl;
    Player *playerPointer1;
    membuatPlayerStackPointer(playerPointer1);
    //cout << (*playerPointer1).nama << endl;
    
    Player *playerPointer2;
    membuatPlayerHeapPointer(playerPointer2);
    cout << playerPointer2->nama << endl;//leak memory
    playerPointer2->nama = "acak-acakan";
    cout << playerPointer2->nama << endl;//leak memory
    delete playerPointer2;

    cout << "\nReturn object" << endl;
    Player playerReturnStack = createStackPlayer();
    cout << playerReturnStack.nama << endl;
    cout << endl;
    Player* playerReturnHeap = createHeapPlayer();
    cout << playerReturnHeap->nama << endl;
    delete playerReturnHeap;


    return 0;
}
