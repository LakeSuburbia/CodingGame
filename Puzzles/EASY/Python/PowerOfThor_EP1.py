import sys
import math
a,b,c,d = [int(i) for i in input().split()]
while True:
    input()
    while (b > d and a > c):
        print("SE")
        d+=1
        c+=1
    while (b<d and a>c):
        print("NE")
        d-=1
        c+=1
    while (b > d and a < c):
        print("SW")
        d+=1
        c-=1
    while (b < d and a < c):
        print("NW")
        d-=1
        c-=1
    while (a < c):
        c-=1
        print("W")

    while (a > c):
        c+=1
        print("E")

    while (b < d):
        d-=1
        print("N")

    while (b > d):
        d+=1
        print("S")
        
