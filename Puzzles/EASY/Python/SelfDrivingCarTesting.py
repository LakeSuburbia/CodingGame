n = int(input())
x_commands = input().split(";")
x = int(x_commands[0])-1
commands=x_commands[1:]
road = []
for i in range(n):
    r,roadpattern = input().split(";")
    road += [roadpattern]*int(r)

for command in commands:
    num = int(''.join(filter(str.isdigit, command)))
    direction = ''.join(filter(str.isalpha, command))
    for i in range(num):
        if "L" in direction:
            x = x-1
        if "R" in direction:
            x = x+1
        current_road = list(road.pop(0))
        current_road[x] = "#"
        print("".join(current_road))
