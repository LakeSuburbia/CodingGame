#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Grab the pellets as fast as you can!
 **/

int main()
{
    int width; // size of the grid
    int height; // top left corner is (x=0, y=0)
    int x=0;
    cin >> width >> height; cin.ignore();
    for (int i = 0; i < height; i++) {
        string row;
        getline(cin, row); // one line of the grid: space " " is floor, pound "#" is wall
    }

    // game loop
    while (1) {
        int myScore;
        int opponentScore;
        cin >> myScore >> opponentScore; cin.ignore();
        int visiblePacCount; // all your pacs and enemy pacs in sight
        cin >> visiblePacCount; cin.ignore();
        vector<int> xe,ye,myID;
        int closest[5]={1000000,1000000,1000000,1000000,1000000};
        int closeX[5];
        int closeY[5];
        bool sp[visiblePacCount];
        for (int i = 0; i < visiblePacCount; i++) {
            int pacId; // pac number (unique within a team)
            bool mine; // true if this pac is yours
            int x; // position in the grid
            int y; // position in the grid
            string typeId; // unused in wood leagues
            int speedTurnsLeft; // unused in wood leagues
            int abilityCooldown; // unused in wood leagues
            cin >> pacId >> mine >> x >> y >> typeId >> speedTurnsLeft >> abilityCooldown; cin.ignore();
            if(mine){
                xe.push_back(x);
                ye.push_back(y);
                myID.push_back(pacId);
                if(abilityCooldown==0){
                    sp[i]=true;
                }
                else {
                    sp[i]=false;
                }
            }
        }
        int visiblePelletCount; // all pellets in sight
        cin >> visiblePelletCount; cin.ignore();
        for (int i = 0; i < visiblePelletCount; i++) {
            int x;
            int y;
            int value; // amount of points this pellet is worth
            cin >> x >> y >> value; cin.ignore();
            for(int j=0;j<xe.size();j++){
                if(closest[j]>abs(xe[j]-x)+abs(ye[j]-y)){
                    closeX[j]=x;
                    closeY[j]=y;
                    closest[j]=abs(xe[j]-x)+abs(ye[j]-y);
                }
                
            }
            for(int j=0;j<xe.size();j++){
                if(value == 10&&x<1000){
                    closeX[j]=x;
                    closeY[j]=y;
                    x=100000;
                    y=100000;
                }
                
            }
            
        }
        
        for(int i = 0;i<xe.size();i++){
            if(sp[i]&&x>0){cout << "SPEED " << i;
                if(i<xe.size()-1){cout<< "|";}
                else {cout << endl;}
            }
            else{
                cout << "MOVE "<< i << " " << closeX[i] << " " << closeY[i];
                if(i<xe.size()-1){
                    cout<< "|";
                }
                else {
                    cout << endl;
                }
            }
        }
        x++;
        }
}
