import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.
def main():
    n = int(input())

    x = derive(n)
    print(x)

# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)

def derive(n):
    prime = True
    for i  in range(2, int(n)):
        if n%i == 0:
            prime = False
            x = derive(i) * n/i + derive(n/i) * i

    if prime:
        x = 1

    return int(x)

main()
