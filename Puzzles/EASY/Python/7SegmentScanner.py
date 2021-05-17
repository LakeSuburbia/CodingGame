numbers = {
    0: [
        " _ ",
        "| |",
        "|_|",
    ],
    1: [
        "   ",
        "  |",
        "  |",
    ],
    2: [
        " _ ",
        " _|",
        "|_ ",
    ],
    3: [
        " _ ",
        " _|",
        " _|",
    ],
    4: [
        "   ",
        "|_|",
        "  |",
    ],
    5: [
        " _ ",
        "|_ ",
        " _|",
    ],
    6: [
        " _ ",
        "|_ ",
        "|_|",
    ],
    7: [
        " _ ",
        "  |",
        "  |",
    ],
    8: [
        " _ ",
        "|_|",
        "|_|",
    ],
    9: [
        " _ ",
        "|_|",
        " _|",
    ],
}

line_1 = input()
line_2 = input()
line_3 = input()

output = ""

while len(line_1) > 1:
    for i in range(10):
        if (
            line_1[:3] == numbers[i][0]
            and line_2[:3] == numbers[i][1]
            and line_3[:3] == numbers[i][2]
        ):
            output += str(i)
            line_1 = line_1[3:]
            line_2 = line_2[3:]
            line_3 = line_3[3:]
            break

print(output)
