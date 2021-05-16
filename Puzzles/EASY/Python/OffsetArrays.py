class Array:
    def __init__(self, begin, values):
        self.begin = begin
        self.values = values

    def get_value(self, index):
        index = int(index) - int(self.begin)
        return int(self.values[index])


def parse_array(arrays, x):
    name = x[: x.find("[")]
    index = x[x.find("[") + 1: x.rfind("]")]
    if index.find("[") != -1:
        index = int(parse_array(arrays, index))
        return arrays[name].get_value(index)
    else:
        return arrays[name].get_value(index)


n = int(input())
arrays = {}
for i in range(n):
    assignment = input()
    name = str(assignment[: assignment.index("[")])
    begin = int(assignment[assignment.index("[") + 1: assignment.index(".")])
    values = assignment[assignment.index("=") + 1:].split()
    arrays[name] = Array(begin, values)
x = input()

print(parse_array(arrays, x))
