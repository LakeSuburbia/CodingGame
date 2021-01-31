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
    int nbFloors; // number of floors
    int width; // width of the area
    int nbRounds; // maximum number of rounds
    int exitFloor; // floor on which the exit is found
    int exitPos; // position of the exit on its floor
    int nbTotalClones; // number of generated clones
    int nbAdditionalElevators; // ignore (always zero)
    int nbElevators; // number of elevators
    cin >> nbFloors >> width >> nbRounds >> exitFloor >> exitPos >> nbTotalClones >> nbAdditionalElevators >> nbElevators; cin.ignore();
    int elevatorFloor[nbElevators]; // floor on which this elevator is found
    int elevatorPos[nbElevators]; // position of the elevator on its floor
    for (int i = 0; i < nbElevators; i++) {

        cin >> elevatorFloor[i] >> elevatorPos[i]; cin.ignore();
    }

    // game loop
    while (1) {
        int cloneFloor; // floor of the leading clone
        int clonePos; // position of the leading clone on its floor
        string direction; // direction of the leading clone: LEFT or RIGHT
        cin >> cloneFloor >> clonePos >> direction; cin.ignore();



        //cout << cloneFloor << " "<< exitFloor << endl;
       if(cloneFloor==exitFloor||cloneFloor==-1)
        {
            if(exitPos<clonePos){
                if(direction=="LEFT"){
                    cout<<"WAIT";
                }
                else{
                    cout<<"BLOCK";
                }
            }
            else{
                if(direction=="RIGHT"){
                    cout<<"WAIT";
                }
                else{
                    cout<<"BLOCK";
                }
            }
            cout <<endl;
        }
        //else {
        //cout<< cloneFloor<<" "<<exitFloor;
        //}
        else if (cloneFloor<exitFloor){
            int NextEl;
            for(int i=0;i<nbElevators;i++){
                if(cloneFloor==elevatorFloor[i]){
                    NextEl=i;
                }
            }
            if(elevatorPos[NextEl]<clonePos){
                //while(elevatorPos[NextEl]<clonePos){
                    if(direction=="LEFT"){
                        cout<<"WAIT";
                    }
                    else{
                        cout<<"BLOCK";
                    }
                    cout <<endl;
                //}
            }
            if(elevatorPos[NextEl]>clonePos){
               //while(elevatorPos[NextEl]>clonePos){
                   if(direction=="RIGHT"){
                        cout<<"WAIT";
                    }
                    else{
                        cout<<"BLOCK";
                    }
                    cout <<endl;
               //}
            }
            if(elevatorPos[NextEl]==clonePos){
                cout << "WAIT"<<endl;
            }
            
            } 
            
        }
    
        
}
