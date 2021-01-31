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
    string b;
    getline(cin, b);
    int counter=0,longest=0, bcounter=0;


    for(int i = 0;i<b.length();i++){
        if(b.at(i)=='0'){
            b.at(i)='1';
            counter++;
            int j = i-1;
            while(j>=0&&b.at(j)=='1'){
                counter++;
                j--;
            }
            j=i+1;
            while(j<b.length()&&b.at(j)=='1'){
                counter++;
                j++;
            } 
                b.at(i)='0';
            }
            if(longest<counter){longest=counter;
            }
            counter=0;
        }
    cout << longest;
}
