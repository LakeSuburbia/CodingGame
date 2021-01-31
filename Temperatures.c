#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    int n; // the number of temperatures to analyse
    scanf("%i",&n); 
    int temp[n];
    int diff = 5527;
    if(n == 0)
        {
            diff = 0;
        }
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        scanf("%i", &t); 
        temp[i]=t;
        
        if(t>0)
        {
            if(abs(diff) >= t)
            {
                diff = t;
            }
        }
        else if (t<0)
        {
            if(abs(diff) > abs(t))
            {
                diff = t;
            }
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    printf("%i", diff);
}
