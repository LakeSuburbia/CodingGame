#include <iostream>
#include <string>
using namespace std;int main(){int f,w,r,e,x,c,a,b,h,m;cin>>f>>w>>r>>e>>x>>c>>a>>b;int d[b],g[b];for(int i=0;i<b;i++){cin>>d[i]>>g[i];}while(1){string n,z;cin>>h>>m>>n;if(h==e||h==-1){if((x<m&&n[0]=='L')||(x>m&&n[0]=='R')){z="WAIT";}else{z="BLOCK";}}else if(h<e){int y;for(int i=0;i<b;i++){if(h==d[i]){y=i;}}if((g[y]<m&&n[0]=='L')||(g[y]>m&&n[0]=='R')){z="WAIT";}else{z="BLOCK";}if(g[y]==m){z="WAIT";}}cout<<z+"\n";}}
