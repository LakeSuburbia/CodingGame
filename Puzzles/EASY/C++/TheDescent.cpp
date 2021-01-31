#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/
int berg[8];
int x;
int memI;

int main()
{

    // game loop
    while (1) {
        x = 0;
        memI = -1;
        for (int i = 0; i < 8; i++) {
            int mountainH; // represents the height of one mountain.
            cin >> mountainH; 
            berg[i] = mountainH;
            if((x <= mountainH))
            {
                memI = i;
                x = mountainH;
            }
            cin.ignore();
        }


        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        cout << memI << endl; // The index of the mountain to fire on.
    }
}
