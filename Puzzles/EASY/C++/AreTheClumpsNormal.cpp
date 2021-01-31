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
    string numbers;
    cin >> numbers; cin.ignore();

    bool normal = true;
    int answer = 0;

    int min = 1; 

        for (int j = 2; j <= 9; j++) {
            int nbModular = 1;
            int currModulo = numbers[0] % j;

            for (int i = 1; i < numbers.length(); i++) {
                int tmp = numbers[i] % j;

                if (currModulo != tmp) {
                    nbModular++;
                    currModulo = tmp;
                }
            }

            if (min > nbModular) {
                normal = false;
                answer = j;
                break;
            }

            min = nbModular;
        }

        if (normal)
        {
            cout << "Normal" << endl;
        }
        else
        {
            cout << answer << endl;
        }
}
