x,y,i,j=map(int,input().split())
while(1):u=y>j;u-=y<j;v=x>i;v-=x<i;print(["","S","N"][u]+["","E","W"][v]);j+=u;i+=v