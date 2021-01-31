#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    scanf("%i%i%i%i", &lightX, &lightY, &initialTX, &initialTY);

    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        while(lightY > initialTY && lightX > initialTX)
        {
            scanf("%i", &remainingTurns);
            printf("SE\n");
            initialTY++;
            initialTX++;
        }
        while(lightY < initialTY && lightX > initialTX)
        {
            scanf("%i", &remainingTurns);
            printf("NE\n");
            initialTY--;
            initialTX++;
        }
        while(lightY > initialTY && lightX < initialTX)
        {
            scanf("%i", &remainingTurns);
            printf("SW\n");
            initialTY++;
            initialTX--;
        }
        while(lightY < initialTY && lightX < initialTX)
        {
            scanf("%i", &remainingTurns);
            printf("NW\n");
            initialTY--;
            initialTX--;
        }
        while(lightX < initialTX)
        {
            scanf("%i", &remainingTurns);
            initialTX--;
            printf("W\n");              
        }
        while(lightX > initialTX)
        { 
            scanf("%i", &remainingTurns);
            initialTX++;
            printf("E\n");         
        }
        while(lightY < initialTY)
        { 
            scanf("%i", &remainingTurns);
            initialTY--;
            printf("N\n");        
        }
        while(lightY > initialTY)
        { 
            scanf("%i", &remainingTurns);
            initialTY++;
            printf("S\n");       
        }
       
    }
}
