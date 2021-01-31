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
    int N;
    int smallestDiff=100000;
    cin >> N; cin.ignore();
    int Pi[N];
    for (int i = 0; i < N; i++) {
        
        cin >> Pi[i]; cin.ignore();
    }
    sort(Pi, Pi+N); 

    for(int i = 0;i < N-1; i++){
        if(Pi[i+1]-Pi[i]<smallestDiff){
            smallestDiff=Pi[i+1]-Pi[i];
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << smallestDiff << endl;
}
