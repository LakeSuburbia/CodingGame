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
    int n;
    int m;
    int c;
    int totalC=0;
    int maxC=0;
    
    cin >> n >> m >> c; cin.ignore();

    int nx[n];
    int mx[m];
    int aantalClicks[n];

    for(int i = 0; i < n; i++){
        aantalClicks[i]=0;
    }

    for (int i = 0; i < n; i++) {
        cin >> nx[i]; cin.ignore();
    }
    for (int i = 0; i < m; i++) {
        cin >> mx[i]; cin.ignore();
        mx[i]=mx[i]-1;
    }



    for (int i = 0; i < m; i++) {
        aantalClicks[mx[i]]++;
        int odd=aantalClicks[mx[i]]%2;
        //cout << odd << endl;
        //cout << aantalClicks[mx[i]] << endl;
        if(odd==1){  
            totalC = totalC + nx[mx[i]];
        }
        else {
            totalC = totalC - nx[mx[i]];
        }

        if(maxC < totalC){
            maxC = totalC;
        }
        //cout << maxC << endl;
    }





/**
    for(int i = 0;i < n; i++){
        aantalClicks[i]=0;
    }

    for(int i = 0;i < m; i++){
        aantalClicks[mx[i]-1]++;
    }
    for(int i = 0; i < n;i++){
        if(aantalClicks[i]%2!=0){
            totalC = totalC+nx[i];
        }
    }
**/

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    if(maxC<c){

        cout << "Fuse was not blown." << endl;
        cout << "Maximal consumed current was "<< maxC <<" A." << endl;
    }
    else {
        cout << "Fuse was blown." << endl;
        //cout << "Maximal consumed current was "<< maxC <<" A." << endl;
    }
}
