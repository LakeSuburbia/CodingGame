n = int(input())
for i in range(n):
    x = str(input())
    happy = x
    for j in range(1000):
        current = 0
        for dec in str(happy):
            current += int(dec) ** 2
        happy = current
    if happy == 1:
        print(x + " :)")
    else:
        print(x + " :(")
