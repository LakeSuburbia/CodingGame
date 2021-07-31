TYPES = [
    {"TOP": "NULL", "LEFT": "NULL", "RIGHT": "NULL"},
    {"TOP": "DOWN", "LEFT": "DOWN", "RIGHT": "DOWN"},
    {"TOP": "NULL", "LEFT": "RIGHT", "RIGHT": "LEFT"},
    {"TOP": "DOWN", "LEFT": "NULL", "RIGHT": "NULL"},
    {"TOP": "LEFT", "LEFT": "NULL", "RIGHT": "DOWN"},
    {"TOP": "RIGHT", "LEFT": "DOWN", "RIGHT": "NULL"},
    {"TOP": "NULL", "LEFT": "RIGHT", "RIGHT": "LEFT"},
    {"TOP": "DOWN", "LEFT": "NULL", "RIGHT": "DOWN"},
    {"TOP": "NULL", "LEFT": "DOWN", "RIGHT": "DOWN"},
    {"TOP": "DOWN", "LEFT": "DOWN", "RIGHT": "NULL"},
    {"TOP": "LEFT", "LEFT": "NULL", "RIGHT": "NULL"},
    {"TOP": "RIGHT", "LEFT": "NULL", "RIGHT": "NULL"},
    {"TOP": "NULL", "LEFT": "NULL", "RIGHT": "DOWN"},
    {"TOP": "NULL", "LEFT": "DOWN", "RIGHT": "NULL"},
]


def get_new_coordinates(x, y, direction):
    if direction == "DOWN":
        return (x, y + 1)
    if direction == "LEFT":
        return (x - 1, y)
    if direction == "RIGHT":
        return (x + 1, y)
    return (x, y)


def get_next_room(board, x, y, position):
    t = int(board[y][x])
    direction = TYPES[t][position]
    return get_new_coordinates(x, y, direction)


w, h = [int(i) for i in input().split()]
board = []
for i in range(h):
    line = (
        input()
    )  # represents a line in the grid and contains W integers. Each integer represents one room of a given type.
    board.append(line.split())
ex = int(
    input()
)  # the coordinate along the X axis of the exit (not useful for this first mission, but must be read).

while True:
    inputs = input().split()
    xi = int(inputs[0])
    yi = int(inputs[1])
    position = inputs[2]
    nextx, nexty = get_next_room(board, xi, yi, position)
    print(f"{nextx} {nexty}")
