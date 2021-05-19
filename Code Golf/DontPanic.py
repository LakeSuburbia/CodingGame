i=lambda:map(int,input().split())
_,_,_,d,e,_,_,n=i()
z={d:e}
exec("j,k=i();z[j]=k;"*n)
while 1:l,m,o=input().split();o,l,m=len(o),int(l),int(m);print(["WAIT","BLOCK"][l>-1 and(m>z[l]>0<o>4 or m<z[l]>0<o<5)])