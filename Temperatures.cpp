#include <iostream>
int main(){int n,t,x=5529;std::cin>>n;for(int i=0;i<n;i++){std::cin>>t;(abs(t)<abs(x))?(x=t):(abs(t)==abs(x)&&(t>x))?(x=t):t;}if(!n)x=0;std::cout<<x;}
