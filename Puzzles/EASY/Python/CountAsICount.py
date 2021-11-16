from itertools import product

elements = [
    0,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
    10,
    11,
    12,
    "2",
    "3",
    "4",
    "5",
    "6",
    "7",
    "8",
    "9",
    "10",
    "11",
    "12",
]
n = 50 - int(input())
perm = filter(lambda x: sum(map(int, x)) == n, product(elements, repeat=4))
perm = set([tuple(filter(lambda x: x != 0, t)) for t in perm])


print(len(perm))
