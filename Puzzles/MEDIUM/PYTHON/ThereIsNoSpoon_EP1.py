grid = []

width = int(input())
height = int(input())
for i in range(height):
    grid.append(input())

for y in range(height):
    for x in range(width):
        if grid[y][x] == "0":
            output = f"{x} {y} "

            # right neighbor
            neighbor = "."
            for neighbor_x in range(x + 1, width):
                neighbor = grid[y][neighbor_x]
                if neighbor == "0":
                    output += f"{neighbor_x} {y} "
                    break

            if neighbor == ".":
                output += "-1 -1 "

            # bottom neighbor
            neighbor = "."
            for neighbor_y in range(y + 1, height):
                neighbor = grid[neighbor_y][x]
                if neighbor == "0":
                    output += f"{x} {neighbor_y} "
                    break

            if neighbor == ".":
                output += "-1 -1 "

            print(output)
