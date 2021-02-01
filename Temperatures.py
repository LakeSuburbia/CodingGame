x=5529
if input()=='0':x=0
for i in input().split():
 t=int(i)
 if abs(t)<abs(x):x=t
 elif abs(t)==abs(x)&t>x:x=t  
print(x)
