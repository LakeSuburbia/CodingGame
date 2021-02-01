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
    int factoryCount; // the number of factories
    cin >> factoryCount; cin.ignore();
    int linkCount; // the number of links between factories
    cin >> linkCount; cin.ignore();
    int distance[factoryCount][factoryCount];
    for (int i = 0; i < linkCount; i++) {
        int factory1;
        int factory2;
        
        cin >> factory1 >> factory2 >> distance[factory1][factory2]; cin.ignore();
    }

    // game loop
    while (1) {
        int shortest=21;
        int myFactoryId = -1;
        int enemyFactoryId = -1;
        int troopsNb = 0;
        int max = 0;
        int entityCount; // the number of entities (e.g. factories and troops)
        cin >> entityCount; cin.ignore();
        for (int i = 0; i < entityCount; i++) {
            int entityId;
            string entityType;
            int arg1;
            int arg2;
            int arg3;
            int arg4;
            int arg5;
            cin >> entityId >> entityType >> arg1 >> arg2 >> arg3 >> arg4 >> arg5; cin.ignore();
            if(entityType=="FACTORY"){
                if(arg1==1){
                    if(max<arg2){
                        if(arg2>3){max=arg2;
                        myFactoryId = entityId;
                        troopsNb = arg2-2;
                        }
                        else {
                            myFactoryId=-1;
                        }
                    }
                    // Voor déze fabriek, welke andere fabriek staat er het dichtst?
                    // overloop elke mogelijke link vanuit dìt fabriek  
                }
                else{
                    if(distance[myFactoryId][entityId]<shortest){
                        enemyFactoryId = entityId;
                        shortest=distance[myFactoryId][entityId];
                    }
                }
            }
        }

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;


        // Any valid action, such as "WAIT" or "MOVE source destination cyborgs"
        if (myFactoryId != -1 && enemyFactoryId != -1) {
            cout <<"MOVE "<<myFactoryId<<" "<<enemyFactoryId<<" "<<troopsNb<<endl;
        }
        else {
            cout << "WAIT"<<endl;
        }
    }
}
