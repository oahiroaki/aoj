inputs = """3 10
0
1 1
2 2 3
4 20
2 1 2
1 3
1 4
2 5
2 1 2
0
0
3 3
0
1 1
2 2 3
0 0"""

n, m = 3, 10

def init_tray(n):
    return {'A': [0,0,0], 'B': [1,0,0], 'C': [0,1,1]}

tray = init_tray(n)

def move():
    
