def neighbour_count(board, x, y, w, h):
    count = 0
    state = "O"
    for i in range(max(0, y - 1), min(h, y + 2)):
        for j in range(max(0, x - 1), min(w, x + 2)):
            if board[i][j] == state and (i != y or j != x):
                count += 1
    return count


h, w, n = [int(i) for i in input().split()]
alive = input()
dead = input()
board = []
for i in range(h):
    board.append(input())

for rounds in range(n):
    newboard = []
    for j in range(h):
        newline = ""
        for i in range(w):
            state = board[j][i]
            if state == "O":
                if alive[neighbour_count(board, i, j, w, h)] == "1":
                    action = "O"
                else:
                    action = "."
            else:
                action = dead[neighbour_count(board, i, j, w, h)]
                if dead[neighbour_count(board, i, j, w, h)] == "1":
                    action = "O"
                else:
                    action = "."
            newline += action
        newboard.append(newline)
    board = newboard


for line in board:
    print(line)
