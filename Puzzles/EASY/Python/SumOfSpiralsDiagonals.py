
n = int(input())
i = 1
count = 0
count2 = 0
sum = 1
while(i<n**2):
    i += n-1-count2
    sum += i
    count += 1
    if count > 3:
        count = 0
        count2 += 2
print(sum)