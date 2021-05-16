import re

benford = {
    1: 30.1,
    2: 17.6,
    3: 12.5,
    4: 9.7,
    5: 7.9,
    6: 6.7,
    7: 5.8,
    8: 5.1,
    9: 4.6}
    
valid = False
n = int(input())
counter = [0] * 9
for i in range(n):
    transaction = input()
    number = str(re.findall(r"\d+", transaction)[0])
    counter[int(number[0]) - 1] += 1
total = sum(counter)
for i in range(9):
    percentage = 100 * counter[i] / total

    if percentage > benford[i + 1] + 10:
        valid = True
        break
    if percentage < benford[i + 1] - 10:
        valid = True
        break

print(str(valid).lower())
