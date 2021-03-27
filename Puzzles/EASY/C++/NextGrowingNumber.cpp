#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


bool growing_check(string n);

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string n;
    getline(cin, n);
    
    n = to_string(stoll(n)+1);

    if (n.length() > 1 )
    {
        bool change = false;
        for(int i = 0; i < n.length()-1; i++){

            int mem = (int)n[i+1];
            if (change)
            {
                n[i+1]=(char)min((int)n[i+1],(int)n[i]);
            }
            n[i+1]=(char)max((int)n[i+1],(int)n[i]);
            n[i]=(char)min((int)n[i+1],(int)n[i]);

            if (mem < (int)n[i+1])
            {
                change = true;
            }
            
        }
    }

    cout << n << endl;
    
}
