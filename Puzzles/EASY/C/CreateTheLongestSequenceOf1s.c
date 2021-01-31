#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    char b[1000];
    fgets(b, 1000, stdin);
    int counter=0,longest=0, bcounter=0;


    for(int i = 0;i<1000;i++){
        if(b[i]=='0'){
            b[i]='1';
            counter++;
            int j = i-1;
            while(j>=0&&b[j]=='1'){
                counter++;
                j--;
            }
            j=i+1;
            while(j<10000&&b[j]=='1'){
                counter++;
                j++;
            } 
                b[i]='0';
            }
            if(longest<counter){longest=counter;
            }
            counter=0;
        }
    printf("%i\n",longest);
}
