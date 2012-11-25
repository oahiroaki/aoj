def form_check(t):
    plus = t.index('+')
    equal = t.index('=')
    n = [t[:plus], t[plus + 1:equal], t[equal + 1:]]
    for a in n:
        if len(a) > 1 and a[0] == 'X':
            return False
    return True

def check(t):
    if eval(t.replace('=', ' == ')):
        return True
    else:
        return False

while True:
    try:
        line = raw_input()
    except EOFError:
        break

    if form_check(line):
        nums = range(0, 10)
    else:
        nums = range(1, 10)
    a = -1
    for num in nums:
        if check(line.replace('X', str(num))):
            a = num
    if a >= 0:
        print a
    else:
        print 'NA'
