#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int lastLandY;
    int lastLandX;
    int landX; // X coordinate of a surface point. (0 to 6999)
    int landY;
    int targetX1;
    int targetX2;
    int targetY;
    bool komtvanlinks=false;
    bool komtvanrechts=false;
    int surfaceN; // the number of points used to draw the surface of Mars.
    cin >> surfaceN; cin.ignore();
    for (int i = 0; i < surfaceN; i++) {
         // Y coordinate of a surface point. By linking all the points together in a sequential fashion, you form the surface of Mars.
        cin >> landX >> landY; cin.ignore();
        if(landY==lastLandY){targetX1=lastLandX;targetX2=landX;
        targetY=landY;}
        lastLandY=landY;
        lastLandX=landX;
    }

    // game loop
    while (1) {
        int X;
        int Y;
        int hSpeed; // the horizontal speed (in m/s), can be negative.
        int vSpeed; // the vertical speed (in m/s), can be negative.
        int fuel; // the quantity of remaining fuel in liters.
        int rotate; // the rotation angle in degrees (-90 to 90).
        int power; // the thrust power (0 to 4).
        cin >> X >> Y >> hSpeed >> vSpeed >> fuel >> rotate >> power; cin.ignore();
        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        if(targetY>Y-150){
            cout << "0 4" << endl;
        }
        else{
        if(hSpeed<20&&hSpeed>-20){   
            if(targetX2+400<X){
                cout <<"45 3"<<endl;
            }
            else if (targetX1-400>X) {
                cout <<"-45 3"<<endl;
            }
            else if(vSpeed < -39 ){
                cout << "0 4" << endl;
            }
            else if (vSpeed < -30) {
                cout << "0 3" << endl;
            }
            else if (vSpeed < -20) {
                cout << "0 2" << endl;
            }
            else {
                cout << "0 1" << endl;
            }
        }
        else {
            if(hSpeed >15){
                cout <<"30 4"<<endl;
            }
            else if(hSpeed <-15){
                cout <<"-30 4"<<endl;
            }
            else if(vSpeed < -39 ){
                cout << "0 4" << endl;
            }
            else if (vSpeed < -30) {
                cout << "0 3" << endl;
            }
            else if (vSpeed < -20) {
                cout << "0 2" << endl;
            }
            else {
                cout << "0 1" << endl;
            }
        }
    }
        // 2 integers: rotate power. rotate is the desired rotation angle (should be 0 for level 1), power is the desired thrust power (0 to 4).
        
    }
}
