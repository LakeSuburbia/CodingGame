class Cube:
    def __init__(self):
        self.faces = {"F": "F", "B": "B", "U": "U", "D": "D", "L": "L", "R": "R"}

    def z(self, direction):
        up = self.faces["U"]
        left = self.faces["L"]
        down = self.faces["D"]
        right = self.faces["R"]

        self.faces["U"] = left
        self.faces["L"] = down
        self.faces["D"] = right
        self.faces["R"] = up

        if direction == -1:
            self.z(1)
            self.z(1)

    def y(self, direction):
        front = self.faces["F"]
        left = self.faces["L"]
        back = self.faces["B"]
        right = self.faces["R"]

        self.faces["B"] = left
        self.faces["R"] = back
        self.faces["F"] = right
        self.faces["L"] = front

        if direction == -1:
            self.y(1)
            self.y(1)

    def x(self, direction):
        front = self.faces["F"]
        down = self.faces["D"]
        back = self.faces["B"]
        up = self.faces["U"]

        self.faces["F"] = down
        self.faces["D"] = back
        self.faces["B"] = up
        self.faces["U"] = front

        if direction == -1:
            self.x(1)
            self.x(1)

    def get_key(self, val):
        for key, value in self.faces.items():
            if val == value:
                return key
        return "key doesn't exist"


cube = Cube()
rotations = input().split()
for move in rotations:
    if len(move) > 1:
        direction = -1
    else:
        direction = 1
    if move[0] == "z":
        cube.z(direction)
    if move[0] == "y":
        cube.y(direction)
    if move[0] == "x":
        cube.x(direction)

print(cube.get_key(input()))
print(cube.get_key(input()))
