#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
 int derive(int);

int main()
{
    int n;
    cin >> n; cin.ignore();
    

    cout << derive(n) << endl;
}

int derive(int n)
{
    bool prime = true;
    int x;

    for (int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            prime = false;
            x = derive(i) * n/i + derive(n/i) * i;
        }
    }

    if (prime)
    {
        x = 1;
    }

    return x;
}
