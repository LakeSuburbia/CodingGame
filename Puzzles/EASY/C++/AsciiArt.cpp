#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int L;
    cin >> L; cin.ignore();
    int H;
    cin >> H; cin.ignore();
    string T;
    getline(cin, T);
    string answer[H];
    string ROW[H];

    for (int i = 0; i < H; i++)
    {
        getline(cin, ROW[i]);
    }

    for(int i = 0; i < T.length(); i++)
    {
        char cur = toupper(T[i]);
        int indCur = int(cur) - int('A');

        if (indCur >= 0 && indCur <= 26)
        {
            for(int j = 0; j < H; j++)
            {
                answer[j].append(ROW[j], indCur*(L), L);
            }
        }
        else
        {
            for(int j = 0; j < H; j++)
            {
                answer[j].append(ROW[j], 26*(L), L);
            }
        }
    }



    for(int i = 0; i < H; i++)
    {
        cout << answer[i] << endl;
    }

    //cout << "answer" << endl;
}
