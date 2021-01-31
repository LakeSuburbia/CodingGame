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
    string line[3];
    for (int i = 0; i < 3; i++) {
        getline(cin, line[i]);
    }
    bool answer = true;



    for (int i = 0; i < 3; i++)
    {
        int Ocount = 0;
        int dotcount = 0;
        int x = -1;
        for (int j = 0; j < 3; j++)
        {
            if(line[i].at(j) == 'O')
            {
                Ocount++;
            }
            if(line[i].at(j) == '.')
            {
                dotcount++;
                x = j;
            }
        }
        if(Ocount == 2 && dotcount == 1)
        {
            line[i].at(x) = 'O';
            answer = false;
        }
    }

    if (answer)
    {
        for (int i = 0; i < 3; i++)
        {
            int Ocount = 0;
            int dotcount = 0;
            int x = -1;
            for (int j = 0; j < 3; j++)
            {
                if(line[j].at(i) == 'O')
                {
                    Ocount++;
                }
                if(line[j].at(i) == '.')
                {
                    dotcount++;
                    x = j;
                }
            }
            if(Ocount == 2 && dotcount == 1)
            {
                line[x].at(i) = 'O';
                answer = false;
            }
        }
    }

    if(answer)
    {
        int Ocount = 0;
        int dotcount = 0;
        int x = -1;
        for (int i = 0; i < 3; i++)
        {
            
            if(line[i].at(i) == 'O')
            {
                Ocount++;
            }
            if(line[i].at(i) == '.')
            {
                dotcount++;
                x = i;
            }
        }
        if(Ocount == 2 && dotcount == 1)
        {
            line[x].at(x) = 'O';
            answer = false;
        }

    }

    if (answer){

        int Ocount = 0;
        int dotcount = 0;
        int x = -1;
        for (int i = 0; i < 3; i++)
        {
            
            if(line[i].at(2-i) == 'O')
            {
                Ocount++;
            }
            if(line[i].at(2-i) == '.')
            {
                dotcount++;
                x = i;
            }
        }
        if(Ocount == 2 && dotcount == 1)
        {
            line[x].at(2-x) = 'O';
            answer = false;
        }

    }
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    if (answer)
    {
        cout << "false" << endl;
    }
    else
    {
        cout << line[0] << endl
        << line[1] << endl
        << line[2] << endl;
    }

    
}
