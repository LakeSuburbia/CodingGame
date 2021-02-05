#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int checkpoints; // Count of checkpoints to read
    cin >> checkpoints; cin.ignore();
    int CX[checkpoints]; // Position X
    int CY[checkpoints]; // Position Y
    for (int i = 0; i < checkpoints; i++) {
        cin >> CX[i] >> CY[i]; cin.ignore();
    }

    // game loop
    while (1) {
        int CI; // Index of the checkpoint to lookup in the checkpoints input, initially 0
        int x; // Position X
        int y; // Position Y
        int vx; // horizontal speed. Positive is right
        int vy; // vertical speed. Positive is downwards
        int angle; // facing angle of this car
        cin >> CI >> x >> y >> vx >> vy >> angle; cin.ignore() ;

        int xdist = pow(CX[CI]-x,2);
        int ydist = pow(CY[CI]-y,2);
        int dist = sqrt(xdist + ydist);
        int THRUST = round(dist/100)+50;
        if (THRUST > 200){THRUST = 200;}
        if (THRUST < 0){THRUST = 0;}
        cout << CX[CI] << " " << CY[CI] << " " << THRUST << " " << angle << endl;
    }
}
