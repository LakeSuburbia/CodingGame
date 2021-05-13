x = int(input())
n = int(input())
m = []
total = 0
for i in input().split():
    m.append(int(i))
m.sort(reverse=True)

for i, brick in enumerate(m):
    l = (i) // x
    w = l * 0.65 * brick
    total += w

print("{:.3f}".format(total))
