#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    // the number of points used to draw the surface of Mars.
    int surface_n;
    scanf("%d", &surface_n);
    int lastLandY;
    int lastLandX;
    int landX; // X coordinate of a surface point. (0 to 6999)
    int landY;
    int targetX1;
    int targetX2;
    int targetY;
    bool komtvanlinks=false;
    bool komtvanrechts=false;
    for (int i = 0; i < surface_n; i++) {
        scanf("%d%d", &landX, &landY);
        if(landY==lastLandY){targetX1=lastLandX;targetX2=landX;
        targetY=landY;}
        lastLandY=landY;
        lastLandX=landX;
    }

    // game loop
    while (1) {
        int X;
        int Y;
        // the horizontal speed (in m/s), can be negative.
        int hSpeed;
        // the vertical speed (in m/s), can be negative.
        int vSpeed;
        // the quantity of remaining fuel in liters.
        int fuel;
        // the rotation angle in degrees (-90 to 90).
        int rotate;
        // the thrust power (0 to 4).
        int power;
        
        scanf("%d%d%d%d%d%d%d", &X, &Y, &hSpeed, &vSpeed, &fuel, &rotate, &power);

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");
        if(targetY>Y-150){
            printf("0 4\n");
        }
        else{
        if(hSpeed<20&&hSpeed>-20){   
            if(targetX2+400<X){
                printf("45 3\n");
            }
            else if (targetX1-400>X) {
                printf("-45 3\n");
            }
            else if(vSpeed < -39 ){
                printf("0 4\n");
            }
            else if (vSpeed < -30) {
                printf("0 3\n");
            }
            else if (vSpeed < -20) {
                printf("0 2\n");
            }
            else {
                printf("0 1\n");
            }
        }
        else {
            if(hSpeed >15){
                printf("30 4\n");
            }
            else if(hSpeed <-15){
                printf("-30 4\n");
            }
            else if(vSpeed < -39 ){
                printf("0 4\n");
            }
            else if (vSpeed < -30) {
                printf("0 3\n");
            }
            else if (vSpeed < -20) {
                printf("0 2\n");
            }
            else {
                printf("0 1\n");
            }
        }
    }

        // rotate power. rotate is the desired rotation angle. power is the desired thrust power.
    }

    return 0;
}

