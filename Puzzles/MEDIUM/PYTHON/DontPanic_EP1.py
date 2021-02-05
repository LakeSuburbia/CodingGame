elevator_pos, elevator_input, WAIT, BLOCK = {}, [], "WAIT", "BLOCK"
(
    nb_floors,
    width,
    nb_rounds,
    exit_floor,
    exit_pos,
    nb_total_clones,
    nb_additional_elevators,
    nb_elevators,
) = [int(i) for i in input().split()]

for i in range(nb_elevators):
    elevator_input.append([int(j) for j in input().split()])
    elevator_pos[elevator_input[i][0]] = elevator_input[i][1]

while 1:
    clone_floor, clone_pos, direction = input().split()
    clone_floor, clone_pos = int(clone_floor), int(clone_pos)

    if clone_floor == exit_floor or clone_floor == -1:
        command = (WAIT, BLOCK)[
            (clone_pos > exit_pos and direction[:1] == "R")
            or (clone_pos < exit_pos and direction[:1] == "L")
        ]
    else:
        command = (WAIT, BLOCK)[
            (clone_pos > elevator_pos[clone_floor] and direction[:1] == "R")
            or (clone_pos < elevator_pos[clone_floor] and direction[:1] == "L")
        ]
        
    print(command)
