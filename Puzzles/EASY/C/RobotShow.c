#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int L;
    scanf("%d", &L);
    int N;
    int sum=0;
    int kleinste=N;
    int grootste=0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int b;
        scanf("%d", &b);
        if(b<kleinste){kleinste=b;}
        if(b>=grootste){grootste=b;}
    }
    if(kleinste >= L-grootste){sum=grootste;}
    if(kleinste < L-grootste){sum=L-kleinste;}
    if (sum>L){sum=2*(L/2);}


    printf("%i", sum);
}
