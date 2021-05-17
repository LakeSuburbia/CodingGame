width, height = [int(i) for i in input().split()]
field = []
for i in range(height):
    row = [char for char in input()]
    field.append(row)
for i in range(height):
    for j in range(width):
        if field[i][j] != "#":
            field[i][j] = int(field[i][j])
            if i > 0 and field[i - 1][j] != "#":
                field[i][j] += 1
            if i < height - 1 and field[i + 1][j] != "#":
                field[i][j] += 1
            if j > 0 and field[i][j - 1] != "#":
                field[i][j] += 1
            if j < width - 1 and field[i][j + 1] != "#":
                field[i][j] += 1
            field[i][j] = str(field[i][j])
    print("".join(field[i]))
