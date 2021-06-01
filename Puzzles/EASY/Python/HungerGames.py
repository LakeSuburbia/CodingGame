player_names = {input(): {"killed": [], "killer": []} for i in range(int(input()))}
info = list(input().split() for i in range(int(input())))
for player in info:
    for killed in player[2:]:
        killed = killed.replace(",", "")
        player_names[player[0]]["killed"].append(killed)
        player_names[killed]["killer"].append(player[0])

player_names = sorted(player_names.items(), key=lambda x: x[0])
for i, player in enumerate(player_names):
    if i > 0:
        print("\n")
    print(f"Name: {player[0]}")
    print("Killed: ", end="")
    if player[1]["killed"] == []:
        print("None", end="")
    else:
        killedList = sorted(player[1]["killed"])
        for j, killed in enumerate(killedList):
            if j > 0:
                print(f", {killed}", end="")
            else:
                print(killed, end="")

    print("\nKiller: ", end="")
    if player[1]["killer"] == []:
        print("Winner", end="")
    else:
        killerList = sorted(player[1]["killer"])
        for j, killed in enumerate(killerList):
            if j > 0:
                print(f" {killed}", end="")
            else:
                print(killed, end="")
