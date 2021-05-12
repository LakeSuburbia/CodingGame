import datetime
from dateutil.relativedelta import relativedelta

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.
answer = ""
day, month, year = input().split(".")
begin = datetime.date(int(year), int(month), int(day))

day, month, year = input().split(".")
end = datetime.date(int(year), int(month), int(day))

delta_years = relativedelta(end, begin).years
delta_months = relativedelta(end, begin).months
delta_days = relativedelta(end, begin).days

if delta_years == 1:
    answer += str(delta_years) + " year, "
elif delta_years > 1:
    answer += str(delta_years) + " years, "
if delta_months == 1:
    answer += str(delta_months) + " month, "
elif delta_months >= 1:
    answer += str(delta_months) + " months, "

answer += "total " + str((end - begin).days) + " days"
print(answer)
