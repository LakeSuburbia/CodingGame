#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main()
{
    int surface_n; // the number of points used to draw the surface of Mars.
    scanf("%i", &surface_n);
    // X coordinate of a surface point. (0 to 6999)
    int land_x;
    // Y coordinate of a surface point. By linking all the points together in a sequential fashion, you form the surface of Mars.
    int land_y;
    for (int i = 0; i < surface_n; i++) {
        scanf("%i%i", &land_x, &land_y);
    }

    // game loop
    while (1){
        int X;
        int Y;
        // the horizontal speed (in m/s), can be negative.
        int h_speed;
        // the vertical speed (in m/s), can be negative.
        int v_speed;
        // the quantity of remaining fuel in liters.
        int fuel;
        // the rotation angle in degrees (-90 to 90).
        int rotate;
        // the thrust power (0 to 4).
        int power;
        scanf("%i%i%i%i%i%i%i", &X, &Y, &h_speed, &v_speed, &fuel, &rotate, &power);
        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages...");
        if(v_speed < -39 && Y < 870){
            printf("0 4\n");
        }
        else if(v_speed < -45){
            printf("0 4\n");
        } 
        else if (v_speed < -30) {
            printf("0 3\n");
        }
        else if (v_speed < -26) {
            printf("0 2\n");
        }
        else {
            printf("0 1\n");
        }
        // 2 integers: rotate power. rotate is the desired rotation angle (should be 0 for level 1), power is the desired thrust power (0 to 4).
        
    }
}
