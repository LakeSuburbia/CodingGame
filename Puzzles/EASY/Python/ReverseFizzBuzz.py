n = int(input())
fizz = []
buzz = []
value = -1
for i in range(n):
    line = input()
    if line == "Fizz":
        fizz.append(i)
    elif line == "Buzz":
        buzz.append(i)
    elif line == "FizzBuzz":
        fizz.append(i)
        buzz.append(i)
    else:
        value = int(line) - i

for f in fizz:
    f = f + value
for b in buzz:
    b = b + value

fizz.append(-value)
buzz.append(-value)
f_div = abs(fizz[1] - fizz[0])
b_div = abs(buzz[1] - buzz[0])

print(str(f_div) + " " + str(b_div))
