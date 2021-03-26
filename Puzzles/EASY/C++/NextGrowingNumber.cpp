#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


bool growing_check(string n);
string change_last_digit(string n);

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string n;
    getline(cin, n);
    
    n = to_string(stol(n)+1);
    while(growing_check(n)==false)
    {   
        n = to_string(stol(n)+1);
    }
    cout << n << endl;
    

    //cout << change_last_digit(n) << endl;

    
}







string change_last_digit(string n)
{
    if (n.length() == 1)
    {
        return n;
    }
    else {
        
    }




    if (n[n.length()-1]=='9')
    {
        if (n.length() == 1)
        {
            return "11";
        }
        else if (n[n.length()-2]=='9'){
            string m = change_last_digit(n.substr(0,n.length()-1));
            return m + m[m.length()-1];
        }
        else {
            n[n.length()-2]=n[n.length()-2]+1;
            n[n.length()-1]=n[n.length()-2];
            return n;
        }
    }
}





bool growing_check(string n)
{
    bool growing = true;
    for ( int i = 0; i < n.length()-1; i++ )
    {
        if(int(n[i]) > int(n[i+1]))
        {
            return false;
        }
    }

    return true;
}
