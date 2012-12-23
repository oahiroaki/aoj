class Point():
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def puts(self):
        print self.x, self.y

    def addUp(self, node):
        self.up = node

    def addDown(self, node):
        self.down = node

    def addRight(self, node):
        self.right = node

    def addLeft(self, node):
        self.left = node

point = Point(2,3)

point.puts()

lines = []
while True:
    try:
        line = raw_input()
        lines.append(line)
    except EOFError:
        break

size = 0
for line in lines:
    if len(line) > size:
        size = len(line)
    print line

points = []

for i in range(size):
    for j in range(size):
        points.add(Point(j, i))

print points
