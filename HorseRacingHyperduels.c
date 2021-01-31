#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

 void swap(long long int *xp, long long int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
// A function to implement bubble sort  
void bubbleSort(long long int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}  

int main()
{
    int N;
    scanf("%i", &N);
    long long V[N];
    long long E[N];
    long long strength[N];
    for (int i = 0; i < N; i++) {
        
        scanf("%lld%lld", &V[i], &E[i]);
        strength[i]=V[i] + E[i];
    }


    long long D = 10000000^2;
    for(int j = 0;j < N; j++){
        for(int i = 0;i < N;i++){
            if(i!=j){
                if(D>(llabs(V[i]-V[j])+llabs(E[i]-E[j]))){
                D = (llabs(V[i]-V[j])+llabs(E[i]-E[j]));
                }
            }
        }
    }


    
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    printf("%lld", D);
}
