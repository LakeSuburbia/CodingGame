n = int(input())  # the number of mountains
heights = []
for mountain in input().split():
    # height: height of the mountain
    heights.append(int(mountain))
max_height = max(heights)
output = ["#"] * max_height

for mountain in heights:
    for i in range(mountain):
        output[i] += " " * i + "/" + " " * (mountain - i - 1)
    for i in range(mountain):
        j = mountain - i - 1
        output[j] += " " * (mountain - j - 1) + "\\" + " " * (j)
    for i in range(max_height - mountain):
        j = max_height - i - 1
        output[j] += " " * mountain * 2

# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)

for i in range(max_height):
    j = max_height - i - 1
    print(output[j][1:].rstrip())
