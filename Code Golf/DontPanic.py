a,b,i=input,int,lambda:map(b,a().split())
*c,d,e,_,_,n=i()
z={d:e};exec("j,k=i();z[j]=k;"*n)
while 1:l,m,o=a().split();o,l,m=len(o),b(l),b(m);print(["WAIT","BLOCK"][l>-1 and(o>4<m>z[l]or m<z[l]>o<5)])