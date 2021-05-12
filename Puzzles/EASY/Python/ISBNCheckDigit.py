import re

n = int(input())
invalid = []
for i in range(n):
    isbn = str(input())
    charRe = re.compile(r"[^0-9.]")
    if charRe.search(isbn[: len(isbn) - 1]):
        invalid.append(isbn)
    elif len(isbn) == 10:
        checksum = 0
        for j in range(9):
            mult = 10 - j
            checksum += mult * int(isbn[j])
        remainder = checksum % 11
        if remainder == 1:
            checkdigit = "X"
        elif remainder == 0:
            checkdigit = "0"
        else:
            checkdigit = str(11 - remainder)
        if checkdigit != isbn[9]:
            invalid.append(isbn)
    elif len(isbn) == 13:
        checksum = 0
        for j in range(12):
            mult = (j % 2) * 2 + 1
            checksum += mult * int(isbn[j])
        remainder = checksum % 10
        if remainder == 0:
            checkdigit = "0"
        else:
            checkdigit = str(10 - remainder)
        if checkdigit != isbn[12]:
            invalid.append(isbn)
    else:
        invalid.append(isbn)

print(str(len(invalid)) + " invalid:")
for isbn in invalid:
    print(isbn)
