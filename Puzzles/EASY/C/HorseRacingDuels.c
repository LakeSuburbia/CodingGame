#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}


int main()
{
    int N;
    int smallestDiff=100000;
    scanf("%d", &N);
    int Pi[N], PiSorted[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &Pi[i]);
    }
    
    
    qsort (Pi, N, sizeof(int), compare);
    
    

    for(int i = 0;i < N-1; i++){
        if(Pi[i+1]-Pi[i]<smallestDiff){
            smallestDiff=Pi[i+1]-Pi[i];
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    printf("%i\n", smallestDiff);
}
