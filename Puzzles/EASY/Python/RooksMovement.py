class Cel:
    def __init__(self, colour, horipos, vertpos):
        self.colour = int(colour)
        self.horipos = int(horipos)
        self.vertpos = int(vertpos)

    def get_position(self):
        return chr(self.horipos + 96) + str(self.vertpos)

    def move(self, destination):
        return "R" + self.get_position() + "-" + destination.get_position()

    def catch(self, destination):
        return "R" + self.get_position() + "x" + destination.get_position()

    def possible_moves(self, pieces):
        freedom = self.get_freedom(pieces)

        moves = []

        # Horizontal moves from left to middle
        for i in range(freedom["min_hori"] + 1, self.horipos):
            destination = Cel(-1, i, self.vertpos)
            moves.append(self.move(destination))

        # Vertical moves down to middle
        for i in range(freedom["min_vert"] + 1, self.vertpos):
            destination = Cel(-1, self.horipos, i)
            moves.append(self.move(destination))

        # Vertical moves middle to up
        for i in range(self.vertpos + 1, freedom["max_vert"]):
            destination = Cel(-1, self.horipos, i)
            moves.append(self.move(destination))

        # Horizontal moves middle to right
        for i in range(self.horipos + 1, freedom["max_hori"]):
            destination = Cel(-1, i, self.vertpos)
            moves.append(self.move(destination))

        catches = self.get_catches(freedom, pieces)
        if catches:
            moves += catches

        return moves

    def get_freedom(self, pieces):
        freedom = {"max_vert": 9, "min_vert": 0, "max_hori": 9, "min_hori": 0}

        for piece in pieces:
            if self.horipos == piece.horipos:
                if self.vertpos > piece.vertpos:
                    freedom["min_vert"] = max(piece.vertpos, freedom["min_vert"])
                else:
                    freedom["max_vert"] = min(piece.vertpos, freedom["max_vert"])
            if self.vertpos == piece.vertpos:
                if self.horipos > piece.horipos:
                    freedom["min_hori"] = max(piece.horipos, freedom["min_hori"])
                else:
                    freedom["max_hori"] = min(piece.horipos, freedom["max_hori"])

        return freedom

    def get_catches(self, freedom, pieces):
        catches = []

        for piece in pieces:
            if piece.colour == 1:
                if piece.horipos == self.horipos:
                    if piece.vertpos == freedom["min_vert"]:
                        catches.append(self.catch(piece))
                    if piece.vertpos == freedom["max_vert"]:
                        catches.append(self.catch(piece))
                if piece.vertpos == self.vertpos:
                    if piece.horipos == freedom["min_hori"]:
                        catches.append(self.catch(piece))
                    if piece.horipos == freedom["max_hori"]:
                        catches.append(self.catch(piece))
        return catches


rook_position = input()

rook = Cel(0, int(ord(rook_position[0]) - 96), int(rook_position[1]))

pieces = []
nb_pieces = int(input())

for i in range(nb_pieces):
    inputs = input().split()
    pieces.append(Cel(inputs[0], int(ord(inputs[1][0]) - 96), int(inputs[1][1])))

for move in sorted(rook.possible_moves(pieces)):
    print(move)
