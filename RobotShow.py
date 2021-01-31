import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

l = int(input())
n = int(input())
sum=0
kleinste=100
grootste=0

for i in input().split():
    b = int(i)
    if b < kleinste: 
        kleinste=b
    if b >= grootste: 
        grootste=b

if kleinste > (l-grootste):
    sum=grootste
if kleinste <= (l-grootste): 
    sum=(l-kleinste)
if sum>l:
    sum=2*(l/2)

print(sum)
