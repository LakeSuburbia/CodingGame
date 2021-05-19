a,q,i=input,int,lambda:map(q,a().split())
_,_,_,d,e,_,_,n=i()
z={d:e}
for _ in[1]*n:j,k=i();z[j]=k
while 1:l,m,o=a().split();o,l,m=len(o),q(l),q(m);print(["WAIT","BLOCK"][l>-1 and(m>z[l]>0<o>4 or m<z[l]>0<o<5)])