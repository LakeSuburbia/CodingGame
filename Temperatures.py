import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

n = int(input())  # the number of temperatures to analyse

if n>0:
    closest_temperature_pos=5529
    closest_temperatur_neg=-10000
    for i in input().split():
        # t: a temperature expressed as an integer ranging from -273 to 5526
        t = int(i)
        if t<0:
            if t>closest_temperatur_neg:
                closest_temperatur_neg=t
        else:
            if t<closest_temperature_pos:
                    closest_temperature_pos=t
    if closest_temperature_pos>abs(closest_temperatur_neg):
        result=closest_temperatur_neg
    else:
        result=closest_temperature_pos    
# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)
else:
    result=0

print(result)
