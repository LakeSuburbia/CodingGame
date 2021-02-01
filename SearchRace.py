import sys
import math

# Made by Illedan
CX = []
CY = []
checkpoints = int(input())  # Count of checkpoints to read
for i in range(checkpoints):
    # checkpoint_x: Position X
    # checkpoint_y: Position Y
    checkpoint_x, checkpoint_y = [int(j) for j in input().split()]
    CX.append(checkpoint_x)
    CY.append(checkpoint_y)

# game loop
while True:
    # checkpoint_index: Index of the checkpoint to lookup in the checkpoints input, initially 0
    # x: Position X
    # y: Position Y
    # vx: horizontal speed. Positive is right
    # vy: vertical speed. Positive is downwards
    # angle: facing angle of this car
    CI, x, y, vx, vy, angle = [int(i) for i in input().split()]

    dist = math.sqrt((CX[CI]-x)**2+(CY[CI]-y)**2)
    THRUST = round(dist/100)+50
    
    # Write an action using print
    # To debug: print("Debug messages...", file=sys.stderr, flush=True)

    # X Y THRUST MESSAGE
    VAR1 = 4
    VAR2 = 2
    VAR3 = 1.5

    if CX[CI] - x > 0:
        if CY[CI] - y > 0:
            if angle > 180 and angle < 270:
                THRUST = THRUST / VAR1
            if angle > 0 and angle < 90:
                THRUST = THRUST * VAR2
            else:
                THRUST = THRUST / VAR3
        else:
            if angle > 90 and angle < 180:
                THRUST = THRUST / VAR1
            if angle > 270 and angle < 360:
                THRUST = THRUST * VAR2
            else:
                THRUST = THRUST / VAR3

    else:
        if CY[CI] - y > 0:
            if angle > 270 and angle < 360:
                THRUST = THRUST / VAR1
            if angle > 90 and angle < 180:
                THRUST = THRUST * VAR2
            else:
                THRUST = THRUST / VAR3
        else:
            if angle > 0 and angle < 90:
                THRUST = THRUST / VAR1
            if angle > 180 and angle < 270:
                THRUST = THRUST * VAR2
            else:
                THRUST = THRUST / VAR3


    if THRUST > 200:
        THRUST = 200
    if THRUST < 0:
        THRUST = 0
        
    print(CX[CI],CY[CI],int(THRUST),angle)
