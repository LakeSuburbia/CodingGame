#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int nextRiverNode(int x);

int main()
{
    int r1;
    scanf("%d", &r1);
    bool possible = false;

    for (int i = 1; i < r1; i++)
    {

        if (nextRiverNode(i) == r1)
        {
            possible = true;
        }
    }

    if(possible)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");               
    }

    return 0;
}


int nextRiverNode(int x)
{
    int y = x;
    while(x > 0){
        y = y + x % 10;
        x=x/10;
    }
    return y;
}
