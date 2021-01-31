import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.
smallestDiff=100000 
n = int(input())
pi=[]
for i in range(n):
    pi.append(int(input()))
pi.sort()
for i in range(n-1):
        if(abs(pi[i]-pi[i+1])<smallestDiff):
            smallestDiff=abs(pi[i]-pi[i+1])

# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)

print(smallestDiff)
