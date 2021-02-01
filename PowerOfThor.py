x,y,i,j=[int(s)for s in input().split()]
while(1):
 if j>y:
  print("N",end="")
  j-=1
 if j<y:
  print("S",end="")
  j+=1
 if i>x:
  print("W",end="")
  i-=1
 if i<x:
  print("E",end="")
  i+=1
 print()
