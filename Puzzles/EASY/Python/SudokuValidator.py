def square_check(field):
    for i in range(3):
        for j in range(3):
            # Square itself
            square_count = [0] * 9
            for k in range(3):
                for l in range(3):
                    index = int(field[k + i * 3][l + j * 3]) - 1
                    square_count[index] += 1
            if square_count.count(1) != 9:
                return False
    return True


def hori_check(field):
    for line in field:
        if len(line) != len(set(line)):
            return False
    return True


def vert_check(field):
    for i in range(9):
        square_count = [0] * 9
        for j in range(9):
            square_count[int(field[j][i]) - 1] += 1
        if square_count.count(1) != 9:
            return False
    return True


field = []
for i in range(9):
    field.append(input().split())


print(str(vert_check(field) and hori_check(field) and square_check(field)).lower())
