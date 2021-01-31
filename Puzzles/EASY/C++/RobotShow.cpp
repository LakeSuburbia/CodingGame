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
    int L;
    cin >> L; cin.ignore();
    int N;
    int sum=0;
    int kleinste=N;
    int grootste=0;
    cin >> N; cin.ignore();
    for (int i = 0; i < N; i++) {
        int b;
        cin >> b; cin.ignore();
        if(b<kleinste){kleinste=b;}
        if(b>=grootste){grootste=b;}
    }
    if(kleinste >= L-grootste){sum=grootste;}
    if(kleinste < L-grootste){sum=L-kleinste;}
   if (sum>L){sum=2*(L/2);}


    cout << sum << endl;
}
