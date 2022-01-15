def match_brackets(x, y):
    return (x == ")" and y == "(") or (x == "]" and y == "[") or (x == "}" and y == "{")


expression = input()
found_brackets = []

solution = "true"

for c in expression:
    if c in ["(", "[", "{"]:
        found_brackets += c
    elif c in [")", "]", "}"]:
        if len(found_brackets) == 0:
            solution = "false"
            break
        elif match_brackets(c, found_brackets[-1]):
            found_brackets = found_brackets[:-1]
        else:
            solution = "false"
            break

if len(found_brackets) != 0:
    solution = "false"


print(solution)
