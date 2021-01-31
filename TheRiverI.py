import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

r1 = int(input())
r2 = int(input())
y=int(1)

# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)

while r1!=r2:
    while r1<r2:
        sum=r1
        while r1//y>1: y=y*10
        while r1>0:
            sum=sum+r1//y
            r1=r1%y
            y=y//10
        r1 = sum
        y=1


    while r1>r2:
        sum=r2
        while r2//y>1:
            y=y*10
        while r2>0:
            sum=sum+r2//y
            r2=r2%y
            y=y//10
        r2 = sum
        y=1

print(r1)
