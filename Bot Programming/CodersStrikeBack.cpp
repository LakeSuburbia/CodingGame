
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{
    int i = 0;
    // game loop
    while (1) {
        int thrust;
        int x;
        int y;
        int longestDistance=0;
        int nextCheckpointX; // x position of the next check point
        int nextCheckpointY; // y position of the next check point
        int nextCheckpointDist; // distance to the next checkpoint
        int nextCheckpointAngle; // angle between your pod orientation and the direction of the next checkpoint
        cin >> x >> y >> nextCheckpointX >> nextCheckpointY >> nextCheckpointDist >> nextCheckpointAngle; cin.ignore();
        int opponentX;
        int opponentY;
        cin >> opponentX >> opponentY; cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;


        // You have to output the target position
        // followed by the power (0 <= thrust <= 100)
        // i.e.: "x y thrust"
        // cout << nextCheckpointX-300 << " " << nextCheckpointY-300 << " " << 1000;


        if(nextCheckpointDist < 100)
        {
            thrust = 0; 
        }
        if(nextCheckpointAngle > 90 || nextCheckpointAngle < -90)
        {
            thrust = 0; 
        }
        else
        {
            thrust = 100; 
        }
        
        //if(thrust == 0){
        //    cout << nextCheckpointX << " " << nextCheckpointY << " " << "SHIELD" << endl;
        //}
        if(i == 0){cout << nextCheckpointX << " " << nextCheckpointY << " " << "BOOST" << endl;
        }
        else {
        cout << nextCheckpointX << " " << nextCheckpointY << " " << thrust << endl;
        }

        for(i=0;i<3;i++){
            if(nextCheckpointDist > longestDistance){
                longestDistance = nextCheckpointDist;
            }
        }
    }
} 
