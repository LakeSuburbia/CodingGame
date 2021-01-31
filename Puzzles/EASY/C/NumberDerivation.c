#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

 int derive(int n);

int main()
{
    int n;
    scanf("%d", &n);

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    

    printf("%i",derive(n));

    return 0;
}

int derive(int n)
{
    bool prime = true;
    int x;

    for (int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            prime = false;
            x = derive(i) * n/i + derive(n/i) * i;
        }
    }

    if (prime)
    {
        x = 1;
    }

    return x;
}
