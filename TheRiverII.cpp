#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int nextRiverNode(int x);
int countDecimals(int x);

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int r1;
    cin >> r1; cin.ignore();
    bool possible = false;

    for (int i = 1; i < r1; i++)
    {

        if (nextRiverNode(i) == r1)
        {
            possible = true;
        }
    }

    if(possible)
    {
        cout << "YES" << endl;        
    }
    else
    {
        cout << "NO" << endl;               
    }
}


int nextRiverNode(int x)
{
    int y = x;
    while(x > 0){
        y = y + x % 10;
        x=x/10;
    }
    return y;
}
