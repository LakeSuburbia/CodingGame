# Initializing a queue
queue = []

places, ridecount, n = [int(i) for i in input().split()]
for i in range(n):
    queue.append(int(input()))

# Start of the day
total = 0
index = 0
memo = {}

# The rollercoaster will ride 'ridecount' rounds
for i in range(ridecount):
    places_taken = 0
    # When the queue looks the same as before
    if index in memo:
        places_taken = memo[index]["value"]
        index = memo[index]["index"]
    # When it's the first time the queue looks like this
    else:
        mem_index = index
        for j in range(n):
            if (places_taken) <= places - queue[index]:
                places_taken += queue[index]
                if index == n - 1:
                    index = 0
                else:
                    index += 1

        memo[mem_index] = {"value": places_taken, "index": index}

    total += places_taken
print(total)
