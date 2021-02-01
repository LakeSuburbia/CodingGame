#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

/**
 * Save humans, destroy zombies!
 **/

int main()
{

    // game loop
    while (1) {
        int x, targetX;
        int y, targetY;
        int closest=999999;
        cin >> x >> y; cin.ignore();
        int humanCount;
        cin >> humanCount; cin.ignore();
        int humanX[humanCount];
        int humanY[humanCount];
        for (int i = 0; i < humanCount; i++) {
            int humanId;
            cin >> humanId >> humanX[i] >> humanY[i]; cin.ignore();
        }
        int zombieCount;
        cin >> zombieCount; cin.ignore();
        int zombieX[zombieCount];
        int zombieY[zombieCount];
        int zombieXNext[zombieCount];
        int zombieYNext[zombieCount];
        for (int i = 0; i < zombieCount; i++) {
            int zombieId;
            cin >> zombieId >> zombieX[i] >> zombieY[i] >> zombieXNext[i] >> zombieYNext[i]; cin.ignore();
        }


        for(int i = 0;i<humanCount;i++){
            for(int j=0;j<zombieCount;j++){
                int diff=sqrt(pow(humanX[i]-zombieX[j],2)+pow(humanY[i]-zombieY[j],2));
                if(diff<closest){
                closest=diff;
                targetX=zombieXNext[j];
                targetY=zombieYNext[j];
            }

        }
        closest=999999;
    }
        
        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        cout << targetX << " " << targetY << endl; // Your destination coordinates
    }
}
