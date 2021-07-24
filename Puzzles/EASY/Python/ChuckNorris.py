b="".join([bin(ord(c))[2:].zfill(7) for c in input()])
i,p=0,print
while i<len(b):
 if b[i]=='0':
  p("00",end=" ")
  while i<len(b)and b[i]=='0':
   p("0",end="")
   i+=1
 elif b[i]=='1':
  p("0", end=" ")
  while i<len(b)and b[i]=='1':
   p("0",end="")
   i+=1
 if i!=len(b):
  p(" ",end="")
p()
