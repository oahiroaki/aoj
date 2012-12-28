import sys

def read_inputs():
    inputs = []
    for i in range(9):
        try:
            inputs.append(raw_input())
        except EOFError:
            sys.exit()
    return inputs

def create_routes(inputs):
    for y, line in enumerate(inputs):
        for x, c in enumerate(list(line)):
            if c == '1':
                if y % 2 == 0:
                    dots[y/2][x]["R"] = 1
                    dots[y/2][x+1]["L"] = 1
                else:
                    dots[y/2][x]["D"] = 1
                    dots[y/2+1][x]["U"] = 1

def move_person(dots):
    ret, current = "", "R"
    x, y = 0, 0

    def find(indexs):
        dic = ("R", "D", "L", "U",)
        for i in indexs:
            if dots[y][x][dic[i]]:
                return dic[i]
        return ""

    while True:
        ret += current
        if current == "R":
            x += 1
            current = find([3, 0, 1, 2])
        elif current == "D":
            y += 1
            current = find([0, 1, 2, 3])
        elif current == "L":
            x -= 1
            current = find([1, 2, 3, 0])
        elif current == "U":
            y -= 1
            current = find([2, 3, 0, 1])
        else:
            print "wrong data"
        if x == 0 and y == 0:
            break
    return ret

dots = [[{'U': 0, 'D': 0, 'L': 0, 'R': 0} for i in range(5)] for j in range(5)]

inputs = read_inputs()

create_routes(inputs)

print move_person(dots)
