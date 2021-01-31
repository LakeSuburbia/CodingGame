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
    int W;
    cin >> W; cin.ignore();
    int H;
    cin >> H; cin.ignore();
    int v[W][H];
    int x, y;
    bool surround=false;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> v[i][j]; cin.ignore();
        }
    }

    //middenveld scannen
    for (int i = 1; i < H-1; i++) {
        for (int j = 1; j < W-1; j++) {
            if(v[i][j]==0){
                surround=
                v[i+1][j]==1&&
                v[i-1][j]==1&&
                v[i+1][j+1]==1&&
                v[i-1][j-1]==1&&
                v[i+1][j-1]==1&&
                v[i-1][j+1]==1&&
                v[i][j-1]==1&&
                v[i][j+1]==1;
                if(surround){
                    cout << j << " " << i;
                }
            }
        }
    }

    //randen scannen
    for(int i = 1;i<H-1;i++){
        if(v[i][0]==0){
                surround=
                v[i+1][0]==1&&
                v[i-1][0]==1&&
                v[i+1][0+1]==1&&
                v[i-1][0+1]==1&&
                v[i][0+1]==1;
                if(surround){
                    cout << 0 << " " << i;
                }
            }
        if(v[i][W-1]==0){
                surround=
                v[i+1][W-1]==1&&
                v[i-1][W-1]==1&&
                v[i-1][W-2]==1&&
                v[i+1][W-2]==1&&
                v[i][W-2]==1;
                if(surround){
                    cout << W-1 << " " << i;
                }
            }
        
    }
    for(int i = 1;i<W-1;i++){
            if(v[0][i]==0){
                    surround=
                    v[0][i+1]==1&&
                    v[0][i-1]==1&&
                    v[0+1][i+1]==1&&
                    v[0+1][i-1]==1&&
                    v[0+1][i]==1;
                    if(surround){
                        cout << i << " " << 0;
                    }
                }
            if(v[W-1][i]==0){
                    surround=
                    v[H-1][i+1]==1&&
                    v[H-1][i-1]==1&&
                    v[H-2][i-1]==1&&
                    v[H-2][i+1]==1&&
                    v[H-2][i]==1;
                    if(surround){
                        cout << i << " " << H-1;
                    }
                }
    }


    //Hoeken checken


    if(v[0][0]==0){
                surround=
                v[1][0]==1&&
                v[1][1]==1&&
                v[0][1]==1;
                if(surround){cout << 0 << " " << 0;}
    }
    if(v[0][H-1]==0){
        surround=
                v[1][H-1]==1&&
                v[1][H-2]==1&&
                v[0][H-2]==1;
                if(surround){cout << 0 << " " << H-1;}
    }
    if(v[W-1][0]==0){
        surround=
                v[W-2][0]==1&&
                v[W-2][1]==1&&
                v[W-1][1]==1;
                if(surround){cout << W-1 << " " << 0;}
    }
    if(v[W-1][H-1]==0){
        surround=
                v[W-2][H-1]==1&&
                v[W-2][H-2]==1&&
                v[W-1][H-2]==1;
                if(surround){cout << W-1 << " " << H-1;}
    }
}
