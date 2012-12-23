class Node:
    def __init__(self, left, right):
        self.right = right
        self.left = left

def parse_node(string, index):
    left, right = None, None
    for char in list(string[index:]):
        if char == "(":
            left = parse_node(string, index + 1)
        if char == ",":
            right = parse_node(string, index + 1)
        if char == ")":
            return Node(left, right)

line = "((,),(,))"

nodes = parse_node(line, 0)

while True:
    if nodes.left != None:
        node = nodes.left
    if nodes.right != None:
        node = nodes.right
