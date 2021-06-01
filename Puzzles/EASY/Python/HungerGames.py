players = {input(): [[], []] for i in range(int(input()))}
info = list(input().split(" killed ") for i in range(int(input())))
for player in info:
    killer = player[0]
    for killed in player[1].split(", "):
        players[killer][0].append(killed)
        players[killed][1].append(killer)

i = 0
for key, value in sorted(players.items()):
    print(f"Name: {key}")
    print(f"Killed: {', '.join((['None'], sorted(value[0]))[len(value[0])!=0])}")
    print(f"Killer: {', '.join((['Winner'], sorted(value[1]))[len(value[1])])}")
    if i < len(players) - 1:
        print()
    i += 1
