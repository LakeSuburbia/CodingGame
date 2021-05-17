n = int(input())
x = []
for i in input().split():
    x.append(int(i))
total = 0
while len(x) > 1:
    x.sort()
    new_card = x.pop(0) + x.pop(0)
    x.append(new_card)
    total += new_card

print(total)
