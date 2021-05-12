#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string c;
    getline(cin, c);
    int locplus = c.find('+');
    if (locplus == -1)
    {
        locplus = c.find('-',1);
    }

    double x = stod(c.substr(0,locplus));
    double y = stod(c.substr(locplus, c.length() - locplus - 1));

    int m;
    cin >> m; cin.ignore();

    double ra=0, rb=0;  
    for (int n = 1 ; n < m ; n++) {
        double tmp = rb*rb;
        rb  = 2*ra*rb   + y;
        ra  = ra*ra-tmp + x;
        if ( (ra*ra + rb*rb) > 4.0) { m = n; break; }
    }

    cout << m << endl;
}