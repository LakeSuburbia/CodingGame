import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

lon = float(".".join(input().split(",")))
lat = float(".".join(input().split(",")))
n = int(input())
smallestdist = 100000000
defib=[[]]
closest = -1
for i in range(n):
    ID, name, address, contact, LON, LAT = input().split(";")
    longitude = float(".".join(LON.split(",")))
    latitude = float(".".join(LAT.split(",")))
    defib.append([ID, name, address, contact, LON, LAT])
    x = (lon-longitude)*math.cos((lat+latitude)/2)
    y = lat-latitude
    dist = math.sqrt(x**2+y**2)*6371

    if dist < smallestdist:
        smallestdist = dist
        closest = i

print( defib[closest+1][1] )
