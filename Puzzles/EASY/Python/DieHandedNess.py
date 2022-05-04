class Die:
    top: int
    bottom: int
    middle: list[int]

    def isDegenerate(self) -> bool:
        pair1 = self.top + self.bottom != 7
        pair2 = self.middle[0] + self.middle[2] != 7
        pair3 = self.middle[1] + self.middle[3] != 7
        return pair1 or pair2 or pair3

    def isRightHanded(self) -> bool:
        middle = list(filter(lambda x: x <= 3, self.middle))
        if self.middle[3] in [1, 2, 3] and self.middle[0] in [1, 2, 3]:
            middle = [middle[1], middle[0]]
        if self.top in [1, 3, 5]:
            return middle[0] < middle[1]
        else:
            return middle[1] < middle[0]


die = Die()
die.top = int(input().strip())
die.middle = [int(c) for c in input()]
die.bottom = int(input().strip())

if die.isDegenerate():
    print("degenerate")
elif die.isRightHanded():
    print("right-handed")
else:
    print("left-handed")
