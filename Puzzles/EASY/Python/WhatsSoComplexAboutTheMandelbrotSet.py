def get_complex(m, x, y):
    ra = 0
    rb = 0
    for n in range(1, m):
        tmp = rb * rb
        rb = 2 * ra * rb + y
        ra = ra * ra - tmp + x
        if ra * ra + rb * rb > 4.0:
            return n

    return m


c = input()
m = int(input())
plus_index = max(c.find("+"), c.rfind("-"))

x = float(c[:plus_index])
y = float(c[plus_index : len(c) - 1])

print(get_complex(m, x, y))
