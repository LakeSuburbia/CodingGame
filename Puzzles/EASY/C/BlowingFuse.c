#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n;
    int m;
    int c;
    int totalC=0;
    int maxC=0;
    scanf("%d%d%d", &n, &m, &c);
    int nx[n];
    int mx[m];
    int aantalClicks[n];
    for(int i = 0; i < n; i++){
        aantalClicks[i]=0;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &nx[i]);
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &mx[i]);
        mx[i]=mx[i]-1;
    }
    for (int i = 0; i < m; i++) {
        aantalClicks[mx[i]]++;
        int odd=aantalClicks[mx[i]]%2;
        if(odd==1){  
            totalC = totalC + nx[mx[i]];
        }
        else {
            totalC = totalC - nx[mx[i]];
        }
        if(maxC < totalC){
            maxC = totalC;
        }
    }
    if(maxC<c){
        printf("Fuse was not blown.\n");
        printf("Maximal consumed current was %i A.\n",maxC);
    }
    else {
        printf("Fuse was blown.");
    }
}
