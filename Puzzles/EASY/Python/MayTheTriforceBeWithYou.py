n = int(input())
print(
    "." +
    " " * (2 * n - 2)
    + "*")
for i in range(1, n):
    print(
        " " * (2 * n - i - 1)
        + "*" * (i * 2 + 1)
    )
for i in range(0, n):
    j = n - i
    print(
        " " * (j - 1)
        + "*" * (2 * i + 1)
        + " " * (2 * j - 1)
        + "*" * (2 * i + 1)
    )
