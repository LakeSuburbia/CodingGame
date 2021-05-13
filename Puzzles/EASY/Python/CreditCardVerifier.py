n = int(input())
for i in range(n):
    card_input = []
    card_input[:0] = input().replace(" ", "")
    check_digit1 = 0
    check_digit2 = 0
    for i, number in enumerate(card_input):
        number = int(number)
        if i % 2 > 0:
            check_digit2 += number
        else:
            number = number * 2
            if number >= 10:
                number = number - 9
            check_digit1 += number
    if (check_digit1 + check_digit2) % 10:
        print("NO")
    else:
        print("YES")
