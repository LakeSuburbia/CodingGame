#include<stdio.h>
int main(){int x,y,i,j;scanf("%i%i%i%i",&x,&y,&i,&j);while(1){(j>y)?(printf("N"),j--):j;(j<y)?(printf("S"),j++):j;(i>x)?(printf("W"),i--):j;(i<x)?(printf("E"),i++):j;printf("\n");}}
