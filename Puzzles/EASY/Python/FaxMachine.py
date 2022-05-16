w = int(input())
h = int(input())
t = [int(x) for x in input().split()]
black = True
counter = 0
for i in range(h):
    line = "|"
    for j in range(w):
        if counter == t[0]:
            black = not black
            counter = 0
            t.pop(0)
        if black:
            line += "*"
        else:
            line += " "
        counter += 1
    line += "|"
    print(line)
