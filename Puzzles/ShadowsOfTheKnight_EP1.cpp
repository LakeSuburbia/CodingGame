#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int UP(int X0, int Y0, int lastX, int lastY,int H,int W)
{
    if(lastY < Y0)
        {
            Y0=Y0-(((Y0-lastY)/2)); 
        }
    else if (lastY == Y0) {
            Y0--;
        }
    else {
            Y0=Y0-(((Y0)/2));
        }

    return Y0;
}

int DOWN(int X0, int Y0, int lastX, int lastY,int H,int W)
{
    if(lastY > Y0)
        {
            Y0=Y0+(((lastY-Y0)/2)); 
        }
    else if (lastY == Y0) 
        {
        Y0++;
        }
    else 
        {
                Y0=Y0+((H-Y0)/2);
        }

    return Y0;
}

int RIGHT(int X0, int Y0, int lastX, int lastY,int H,int W)
{
    if(lastX > X0)
            {
                X0=X0+(((lastX-X0)/2)); 
            }
    else if (lastX == X0) {
            X0++;
        }
            else {
                X0=X0+((W-X0)/2);
            }

    return X0;
}

int LEFT(int X0, int Y0, int lastX, int lastY,int H,int W)
{
    if (lastX == X0)
    {
        
        X0--;
        }
    else if(lastX < X0)
            {
                X0=X0-(((X0-lastX)/2)); 
            }
    else {
        cout << "test" << endl;
                X0=X0-(((X0)/2));
            }

    return X0;
}

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int W; // width of the building.
    int H; // height of the building.
    cin >> W >> H; cin.ignore();
    int N; // maximum number of turns before game over.
    cin >> N; cin.ignore();
    int X0;
    int Y0;
    cin >> X0 >> Y0; cin.ignore();
    int lastY;
    int lastX;
    int lowest=H+1;
    int highest=-1;
    int leftest=-1;
    int rightest=W+1;
    int tussenX=0;
    int tussenY=0;

    lastY = H; lastX = W;
    // game loop
    while (1) {
        string bombDir; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        cin >> bombDir; cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl

        // the location of the next window Batman should jump to.
        if(bombDir == "U")
        {
            lowest=Y0;
            Y0=UP(X0,Y0, lastX, highest, H, W);
        }

        if(bombDir == "UR")
        {
            lowest = Y0;
            leftest = X0;
            X0=RIGHT(X0,Y0, rightest, lastY, H, W);
            Y0=UP(X0,Y0, lastX, highest, H, W);
        }

        if(bombDir == "R")
        {
            leftest = X0;
            X0=RIGHT(X0,Y0, rightest, lastY, H, W);
        }

        if(bombDir == "DR")
        {
            leftest = X0;
            highest = Y0;
            X0=RIGHT(X0,Y0, rightest, lastY, H, W);
            Y0=DOWN(X0,Y0, lastX, lowest, H, W);
        }

        if(bombDir == "D")
        {
            highest = Y0;
            Y0=DOWN(X0,Y0, lastX, lowest, H, W);
        }

        if(bombDir == "DL")
        {
            highest = Y0;
            rightest = X0;
            X0=LEFT(X0,Y0, leftest, lastY, H, W);
            Y0=DOWN(X0,Y0, lastX, lowest, H, W);
        }

        if(bombDir == "L")
        {
            rightest = X0;
            X0=LEFT(X0,Y0, leftest, lastY, H, W);
        }

        if(bombDir == "UL")
        {
            rightest = X0;
            lowest = Y0;
            X0=LEFT(X0,Y0, leftest, lastY, H, W);
            Y0=UP(X0,Y0, lastX, highest, H, W);
        }
        lastX = tussenX;
        lastY = tussenY;
        tussenY = Y0;
        tussenX = X0;

        cout << X0 << " " << Y0 << endl;
    }
}
