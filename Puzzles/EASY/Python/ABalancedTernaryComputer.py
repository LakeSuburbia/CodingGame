n = int(input())

output = "" if n != 0 else "0"
while n != 0:
    remainder = n % 3
    n = n // 3
    if remainder == 2:
        rem = -1
        n += 1
    if remainder == 0:
        output = "0" + output
    else:
        if remainder == 1:
            output = "1" + output
        else:
            output = "T" + output

print(output)
