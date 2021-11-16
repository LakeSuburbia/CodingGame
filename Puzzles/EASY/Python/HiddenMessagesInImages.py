w, h = [int(i) for i in input().split()]
lsb = ""
answer = ""
for i in range(h):
    for j in input().split():
        lsb += bin(int(j))[-1:]

for i in range(len(lsb) // 8):
    number = int(lsb[0 + 8 * i : 8 + 8 * i], 2)
    answer += chr(number)
print(answer)
