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
    int R;
    cin >> R; cin.ignore();
    int V;
    cin >> V; cin.ignore();
    vector <int> V_times(V,0);
    vector <int> R_times(R,0);
    int V_open = R;
    for (int i = 0; i < V; i++) {
        int C;
        int N;
        cin >> C >> N; cin.ignore();

        V_times[i] += (pow(10, N)*pow(5,C-N));
    }

    for(int i = 0; i < R; i++){
        R_times[i] += V_times[i];
    }

    while(V_open < V)
    {
        sort(R_times.begin(), R_times.end());

        R_times[0] += V_times[V_open];
        V_open++;
    }

    auto total = max_element(R_times.begin(), R_times.end());

        



    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << *total << endl;
}
