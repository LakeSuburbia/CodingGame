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
    long long r1;
    cin >> r1; cin.ignore();
    long long r2;
    cin >> r2; cin.ignore();

    while(r1!=r2){
        while(r1<r2){
            int y=1;
            long long sum=r1;
            while(r1/y>1){y=y*10;}
            while(r1>0){
                sum=sum+r1/y;
                r1=r1%y;
                y=y/10;
            }
            r1 = sum;
        }
        while(r1>r2){
            int y=1;
            long long sum=r2;
            while(r2/y>1){y=y*10;}
            while(r2>0){
                sum=sum+r2/y;
                r2=r2%y;
                y=y/10;
            }
            r2 = sum;
        }
    }




    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << r1 << endl;
}
