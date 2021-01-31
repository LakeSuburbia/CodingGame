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
    int n; // the number of temperatures to analyse
    cin >> n; 
    int temp[n];
    int diff = 5527;
    if(n == 0)
        {
            diff = 0;
        }
    cin.ignore();
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; 
        temp[i]=t;
        
        cin.ignore();
        
        if(t>0)
        {
            if(abs(diff) >= t)
            {
                diff = t;
            }
        }
        else if (t<0)
        {
            if(abs(diff) > abs(t))
            {
                diff = t;
            }
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << diff << endl;
}
