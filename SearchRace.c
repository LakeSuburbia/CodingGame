#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

/**
 * Made by Illedan
 **/

int main()
{
    // Count of checkpoints to read
    int checkpoints;
        // Position X
        int CX[checkpoints];
        // Position Y
        int CY[checkpoints];
        int checkx, checky;
    scanf("%d", &checkpoints);
    for (int i = 0; i < checkpoints; i++) {
        scanf("%d%d", &checkx, &checky);
        CX[i] = checkx;
        CY[i] = checky;
    }

    // game loop
    while (1) {
        // Index of the checkpoint to lookup in the checkpoints input, initially 0
        int CI;
        // Position X
        int x;
        // Position Y
        int y;
        // horizontal speed. Positive is right
        int vx;
        // vertical speed. Positive is downwards
        int vy;
        // facing angle of this car
        int angle;
        scanf("%d%d%d%d%d%d", &CI, &x, &y, &vx, &vy, &angle);

        int xdist = pow(CX[CI]-x,2);
        int ydist = pow(CY[CI]-y,2);
        int dist = sqrt(xdist + ydist);
        int THRUST = round(dist/100)+50;
        if (THRUST > 200){THRUST = 200;}
        if (THRUST < 0){THRUST = 0;}
        //cout << CX[CI] << " " << CY[CI] << " " << THRUST << " " << angle << endl;
        printf("%d %d %d %d\n", CX[CI], CY[CI], THRUST, angle);
    }

    return 0;
}
