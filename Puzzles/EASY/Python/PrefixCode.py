n = int(input())
prefixes = {}
for i in range(n):
    inputs = input().split()
    prefixes[str(inputs[0])] = chr(int(inputs[1]))
s = str(input())
cache = ""
answer = ""
for digit in s:
    cache += digit
    if cache in prefixes:
        answer += prefixes[cache]
        cache = ""

if len(cache) > 0:
    print("DECODE FAIL AT INDEX " + str(len(s) - len(cache)))
else:
    print(answer)
