import sys
import math
import time
import copy

X = "X"
O = "O"
EMPTY = "EMPTY"

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.
def main():
    board = initial_state()
    action = []
    # game loop
    first = True
    while True:
        Tegenstander = [int(i) for i in input().split()]

        valid_action_count = int(input())
        for i in range(valid_action_count):
            row, col = [int(j) for j in input().split()]

        if first == False:
            board = result(board, Tegenstander)

        # Write an action using print
        # To debug: print("Debug messages...", file=sys.stderr, flush=True)
        action = minimax(board)
        #print (board)
        print(action[0]," ", action[1])
        board = result(board, (action[0], action[1]))
        first = False



def initial_state():
    """
    Returns starting state of the board.
    """
    return [[EMPTY, EMPTY, EMPTY],
            [EMPTY, EMPTY, EMPTY],
            [EMPTY, EMPTY, EMPTY]]


def player(board):
    """
    Returns player who has the next turn on a board.
    """
    aantalX = 0
    aantalO = 0
    for rows in board:
        for item in rows:
            if item == X:
                aantalX += 1
            if item == O:
                aantalO += 1

    if aantalX == aantalO:
        return X
    if aantalX > aantalO:
        return O


def actions(board):
    """
    Returns set of all possible actions (i, j) available on the board.
    """
    PossibleMoves=[]
    for i, rows in enumerate(board):
        for j,item in enumerate(rows):
            if item == EMPTY:
                PossibleMoves.append((i,j))
                
    return PossibleMoves


def result(board, action):
    """
    Returns the board that results from making move (i, j) on the board.
    """
    P = player(board)
    newBoard = []
    newBoard = copy.deepcopy(board)

    if action in actions(board):
        i = action[0]
        j = action[1]
        newBoard[i][j] = P

        return newBoard



def winner(board):
    """
    Returns the winner of the game, if there is one.
    """
    # Check horizontale wins
    for i in range(3):
        aantalX = 0
        aantalO = 0

        for j in range(3):
            if board[i][j] == X:
                aantalX += 1
            elif board[i][j] == O:
                aantalO += 1

        if aantalX == 3:
            return X
        if aantalO == 3:
            return O

        i += 1
    
    # Check verticale wins
    i = 0
    for rows in board:
        aantalX = 0
        aantalO = 0

        j = 0
        for items in rows:
            if board[j][i] == X:
                aantalX += 1
            elif board[j][i] == O:
                aantalO += 1
            j += 1

        if aantalX == 3:
            return X
        if aantalO == 3:
            return O
        i += 1

    # Check diagonale wins pt1
    aantalX = 0
    aantalO = 0
    for i, rows in enumerate(board):
        

        if board[i][i] == X:
                aantalX += 1
        elif board[i][i] == O:
                aantalO += 1

    if aantalX == 3:
            return X
    if aantalO == 3:
            return O

    # Check diagonale wins pt2
    aantalX = 0
    aantalO = 0

    for i, rows in enumerate(board):
        if board[3-i-1][i] == X:
                aantalX += 1
        elif board[3-i-1][i] == O:
                aantalO += 1

    if aantalX == 3:
            return X
    if aantalO == 3:
            return O

    return None


def terminal(board):
    """
    Returns True if game is over, False otherwise.
    """
    filled = True
    if winner(board) == X or winner(board) == O:
        return True
    else:
        for row in board:
            for item in row:
                if item is EMPTY:
                    filled = False
        return filled


def minimax(board):
    """
    Returns the optimal action for the current player on the board.
    """

    if terminal(board):
            return None

    currentPlayer = player(board)
    OptimalScore = -2
    MinimalScore = 2
    nextMove = None

    
    for moves in actions(board):
        newBoard = result(board, moves)
        if currentPlayer == X:
            NewScore = MinMove(newBoard)
            if NewScore > OptimalScore:
                OptimalScore = NewScore
                nextMove = moves
        else:
            NewScore = MaxMove(newBoard)
            if NewScore < MinimalScore:
                MinimalScore = NewScore                    
                nextMove = moves
        
    return nextMove

def MinMove(board):

    if terminal(board):
            return -1

    MinimalScore = 2
    

    for moves in actions(board):
        newBoard = result(board, moves)
        NewScore = MaxMove(newBoard)    
        MinimalScore = min(NewScore, MinimalScore)

    
    return MinimalScore

def MaxMove(board):

    if terminal(board):
            return 1

    OptimalScore = -2

    for moves in actions(board):
        newBoard = result(board, moves)
        NewScore = MinMove(newBoard)
        OptimalScore = max(NewScore, OptimalScore)

    return OptimalScore



main()
