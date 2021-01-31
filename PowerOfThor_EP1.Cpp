#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();

    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        while(lightY > initialTY && lightX > initialTX)
        {
            cin >> remainingTurns; cin.ignore();
            cout << "SE" << endl;
            initialTY++;
            initialTX++;
        }
        while(lightY < initialTY && lightX > initialTX)
        {
            cin >> remainingTurns; cin.ignore();
            cout << "NE" << endl;
            initialTY--;
            initialTX++;
        }
        while(lightY > initialTY && lightX < initialTX)
        {
            cin >> remainingTurns; cin.ignore();
            cout << "SW" << endl;
            initialTY++;
            initialTX--;
        }
        while(lightY < initialTY && lightX < initialTX)
        {
            cin >> remainingTurns; cin.ignore();
            cout << "NW" << endl;
            initialTY--;
            initialTX--;
        }
        while(lightX < initialTX)
        {
            cin >> remainingTurns; cin.ignore();
            initialTX--;
            cout << "W" << endl;                
        }
        while(lightX > initialTX)
        { 
            cin >> remainingTurns; cin.ignore();
            initialTX++;
            cout << "E" << endl;        
        }
        while(lightY < initialTY)
        { 
            cin >> remainingTurns; cin.ignore();
            initialTY--;
            cout << "N" << endl;        
        }
        while(lightY > initialTY)
        { 
            cin >> remainingTurns; cin.ignore();
            initialTY++;
            cout << "S" << endl;        
        }
       
    }
}
