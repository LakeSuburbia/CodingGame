class Schedule:
    def __init__(self, begin, duration):
        self.begin = begin
        self.end = begin + duration
        self.duration = duration

    def get_end(self):
        return self.end

    def get_begin(self):
        return self.begin

    def get_duration(self):
        return self.duration


n = int(input())
d = []
for i in range(n):
    begin, duration = [int(j) for j in input().split()]
    d.append(Schedule(begin, duration))
d.sort(key=lambda x: x.get_begin(), reverse=False)
last = Schedule(0, 0)
count = 0
for i in range(n):
    if last.get_end() <= d[i].get_begin():
        count += 1
        last = d[i]
    else:
        if last.get_end() >= d[i].get_end():
            last = d[i]
print(count)
