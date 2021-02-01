#include <iostream>
using namespace std;int main(){int x,y,i,j;cin>>x>>y>>i>>j;while(1){(j>y)?(cout<<"N",j--):j;(j<y)?(cout<<"S",j++):j;(i>x)?(cout<<"W",i--):j;(i<x)?(cout<<"E",i++):j;cout<<"\n";}}
