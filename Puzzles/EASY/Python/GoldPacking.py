import itertools

length = int(input())
n = int(input())

goldBars = [int(i) for i in input().split() if int(i) <= length]
mem = 0
finalSet = []
for i in range(n):
    comboBars = itertools.combinations(goldBars, i)
    for combo in comboBars:
        sumComboBar = sum(combo)
        if mem < sumComboBar and sumComboBar <= length:
            mem = sumComboBar
            finalSet = combo

print(" ".join(map(str,finalSet)))
