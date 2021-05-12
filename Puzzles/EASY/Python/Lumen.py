n = int(input())
l = int(input())
field = []
c_indices = []

for i in range(n):
    line = input().split()
    field.append(line)
    for j, item in enumerate(line):
        if item == "C":
            c_indices.append((i, j))

for c in c_indices:
    min_vert = max(0, c[0] - l + 1)
    max_vert = min(n, c[0] + l)
    min_hori = max(0, c[1] - l + 1)
    max_hori = min(n, c[1] + l)

    for i in range(min_vert, max_vert):
        for j in range(min_hori, max_hori):
            field[i][j] = "C"

total = 0
for i in range(n):
    total += field[i].count("X")

print(total)
