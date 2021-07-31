months = {
    "Jan": 31,
    "Feb": 28,
    "Mar": 31,
    "Apr": 30,
    "May": 31,
    "Jun": 30,
    "Jul": 31,
    "Aug": 31,
    "Sep": 30,
    "Oct": 31,
    "Nov": 30,
    "Dec": 31,
}
days = [
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday",
]

leap_year = int(input())
if leap_year == 1:
    months["Feb"] = 29

inputs = input().split()

source_day_of_week = inputs[0]
source_month = inputs[1]
source_day_of_month = int(inputs[2])
inputs = input().split()
target_month = inputs[0]
target_day_of_month = int(inputs[1])

source_date_number = 0
target_date_number = 0
for key, value in months.items():
    if key == source_month:
        source_date_number += source_day_of_month
        break
    source_date_number += value

for key, value in months.items():
    if key == target_month:
        target_date_number += target_day_of_month
        break
    target_date_number += value

source_day_number = days.index(source_day_of_week)
# print(f"{source_day_number} {target_date_number} {source_date_number}")

print(days[(source_day_number + target_date_number - source_date_number) % 7])
