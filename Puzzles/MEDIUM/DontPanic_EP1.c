#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int nbFloors; // number of floors
    int width; // width of the area
    int nbRounds; // maximum number of rounds
    int exitFloor; // floor on which the exit is found
    int exitPos; // position of the exit on its floor
    int nbTotalClones; // number of generated clones
    int nbAdditionalElevators; // ignore (always zero)
    int nbElevators; // number of elevators
    scanf("%i%i%i%i%i%i%i%i",&nbFloors, &width, &nbRounds, &exitFloor, &exitPos, &nbTotalClones, &nbAdditionalElevators, &nbElevators);
    int elevatorFloor[nbElevators]; // floor on which this elevator is found
    int elevatorPos[nbElevators]; // position of the elevator on its floor
    for (int i = 0; i < nbElevators; i++) {

        scanf("%i%i", &elevatorFloor[i], &elevatorPos[i]);
    }

    // game loop
    while (1) {
        int cloneFloor; // floor of the leading clone
        int clonePos; // position of the leading clone on its floor
        char direction[11]; // direction of the leading clone: LEFT or RIGHT
        scanf("%d%d%s", &cloneFloor, &clonePos, direction);

        if(cloneFloor==exitFloor||cloneFloor==-1)
        {
            if(exitPos<clonePos){
                if(direction[0]=='L'){
                    printf("WAIT\n");
                }
                else{
                    printf("BLOCK\n");
                }
            }
            else{
                if(direction[0]=='R'){
                    printf("WAIT\n");
                }
                else{
                    printf("BLOCK\n");
                }
            }
        }
        else if (cloneFloor<exitFloor){
            int NextEl;
            for(int i=0;i<nbElevators;i++){
                if(cloneFloor==elevatorFloor[i]){
                    NextEl=i;
                }
            }
            if(elevatorPos[NextEl]<clonePos){
                if(direction[0]=='L'){
                    printf("WAIT\n");
                }
                else{
                    printf("BLOCK\n");
                }
            }
            else if(elevatorPos[NextEl]>clonePos){
                if(direction[0]=='R'){
                    printf("WAIT\n");
                }
                else{
                    printf("BLOCK\n");
                }
            }
            else if(elevatorPos[NextEl]==clonePos){
                printf( "WAIT\n");
            }
        }        
    }       
}
