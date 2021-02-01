#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int count = 0;

    // game loop
    while (1) {
        int myShipCount; // the number of remaining ships
        cin >> myShipCount; cin.ignore();
        int entityCount; // the number of entities (e.g. ships, mines or cannonballs)
        cin >> entityCount; cin.ignore();
        vector <int> nextX;
        vector <int> nextY;
        int myX, myY;
        int closestX, closestY, closest=1000000;
        int dist;
        vector <int> minesX, minesY;
        for (int i = 0; i < entityCount; i++) {
            int entityId;
            string entityType;
            int x;
            int y;
            int arg1;
            int arg2;
            int arg3;
            int arg4;
            cin >> entityId >> entityType >> x >> y >> arg1 >> arg2 >> arg3 >> arg4; cin.ignore();
            if(entityType=="BARREL"){nextX.push_back(x);nextY.push_back(y);}
            if(arg4=='1'){myX=x; myY=y;}
            if(entityType=="MINE"){minesX.push_back(x);minesY.push_back(y);}
        }
        for (int i = 0; i < nextX.size();i++)
        {
            dist=sqrt(int(pow(myX-nextX.at(i),2)+pow(myY-nextY.at(i),2)));
            if (dist<closest){
                closest=dist;
                closestX=nextX.at(i);
                closestY=nextY.at(i);
            }
        }
        
        for (int i = 0; i < myShipCount; i++) {

            // Write an action using cout. DON'T FORGET THE "<< endl"
            // To debug: cerr << "Debug messages..." << endl;
            cout << "MOVE " << closestX << " " << closestY << endl;
             // Any valid action, such as "WAIT" or "MOVE x y"
        }
    }
}
