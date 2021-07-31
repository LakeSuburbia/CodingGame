import math

n = int(input())

information_lists = {
    "42": {},
    "55": {},
}
for i in range(n):
    inputs = input().split()
    information_lists[inputs[1][4:]][inputs[0]] = int(inputs[2])

speeders = {}

for key, value in information_lists["42"].items():
    timedelta = information_lists["55"][key] - value
    speed = math.floor(13 / (timedelta / 3600000))
    if speed > 130:
        speeders[key] = speed

for key, value in sorted(speeders.items(), key=lambda x: x[0], reverse=False):
    print(f"{key} {value}")
