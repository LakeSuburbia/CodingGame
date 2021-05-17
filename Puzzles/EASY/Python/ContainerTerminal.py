def get_stacks(line):
    stacks = []
    for char in line:
        unplaced = True
        memo = -1
        for i, stack in enumerate(stacks):
            if len(stack) <= 0:
                stack.append(char)
                unplaced = False
            elif stack[-1] == char:
                stack.append(char)
                unplaced = False
            elif stack[-1] > char:
                if memo == -1:
                    memo = i
                elif stacks[memo][-1] > stack[-1]:
                    memo = i
        if unplaced:
            if memo == -1:
                stacks.append([char])
            else:
                stacks[memo].append(char)
    return len(stacks)


n = int(input())
for i in range(n):
    line = input()
    print(get_stacks(line))
