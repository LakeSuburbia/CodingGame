def battle(players, game_rules):
    n = len(players)
    if n == 1:
        return {"winner": players[0], "opponents": []}

    winners = []
    losers = []
    for j in range(int(n / 2)):
        i = j * 2
        move1 = players[i]["move"]
        move2 = players[i + 1]["move"]
        if move2 in game_rules[move1]:
            winners.append(players[i])
            losers.append(players[i + 1])
        elif move1 in game_rules[move2]:
            winners.append(players[i + 1])
            losers.append(players[i])
        else:
            if int(players[i]["ID"]) < int(players[i + 1]["ID"]):
                winners.append(players[i])
                losers.append(players[i + 1])
            elif int(players[i]["ID"]) > int(players[i + 1]["ID"]):
                winners.append(players[i + 1])
                losers.append(players[i])

    nextround = battle(winners, game_rules)
    winner = nextround["winner"]
    windex = winners.index(winner)
    opponents = nextround["opponents"]
    opponents.append(losers[windex]["ID"])

    return {"winner": winner, "opponents": opponents}


n = int(input())
game_rules = {
    "R": ["L", "C"],
    "P": ["R", "S"],
    "C": ["P", "L"],
    "L": ["S", "P"],
    "S": ["C", "R"],
}
players = []
for i in range(n):
    inputs = input().split()
    numplayer = int(inputs[0])
    move = inputs[1]
    players.append({"ID": str(numplayer), "move": move})

game = battle(players, game_rules)
winner = game["winner"]["ID"]
opponents = game["opponents"]
opponents.reverse()
print(winner)
print(" ".join(opponents))
