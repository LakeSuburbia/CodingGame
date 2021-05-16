class Node:
    def __init__(self, parent):
        self.parent = parent
        self.left = None
        self.right = None

    def set_children(self, left, right):
        self.left = Node(left)
        self.right = Node(right)
        return {self.left, self.right}


def find_node(node, key):
    if not node:
        return False

    if node.parent == key:
        return node

    res1 = find_node(node.left, key)
    if res1:
        return res1

    res2 = find_node(node.right, key)
    if res2:
        return res2


def find_path(node, key):
    if node:
        if node.parent == key:
            return ["Root"]

        res1 = find_path(node.left, key)
        if res1:
            res1.append("Left")
            return res1

        res2 = find_path(node.right, key)
        if res2:
            res2.append("Right")
            return res2


n = int(input())
v = int(input())
m = int(input())

p, l, r = [int(j) for j in input().split()]
root = Node(p)
root.set_children(l, r)

for i in range(m - 1):
    p, l, r = [int(j) for j in input().split()]
    new_nodes = find_node(root, p)
    if new_nodes:
        new_nodes.set_children(l, r)

path = find_path(root, v)
output = ""

if len(path) == 1:
    output += "Root"
else:
    path.pop(0)
    path.reverse()
    for item in path:
        output += item + " "
    output = output[:-1]

print(output)
