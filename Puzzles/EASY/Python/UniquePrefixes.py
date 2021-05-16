n = int(input())
words = []
for i in range(n):
    words.append(input())
for word in words:
    prefix = ""
    valid = False
    for i in range(len(word)):
        counter = 0
        prefix += word[i]

        for compare in words:
            if prefix == compare[: i + 1]:
                counter += 1
        if counter <= 1:
            print(prefix)
            valid = True
            break
    if not valid:
        print(prefix)
