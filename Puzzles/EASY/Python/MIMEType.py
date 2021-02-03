import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

n = int(input())  # Number of elements which make up the association table.
q = int(input())  # Number Q of file names to be analyzed.
dic = {}
fname = []
for i in range(n):
    # ext: file extension
    # mt: MIME type.
    ext, mt=(input().split())
    dic[ext.lower()]=mt
for i in range(q):
    fname, exten=input().split('.')
    try:
        print (dic[exten.lower()]) 
    except KeyError: 
        print ("UNKNOWN")



