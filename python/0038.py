HANDS = {
    'one pair': [1,1,1,2],
    'two pair': [1,2,2],
    'three card': [1,1,3],
    'four card': [1,4],
    'full house': [2,3],
}

def check(key, value):
    for (k, v) in HANDS.iteritems():
        if value == v:
            return k
    if key[-1] - key[0] == 4 or key == [1, 10, 11, 12, 13]:
        return 'straight'
    else:
        return 'null'

while True:
    try:
        cards = map(int, raw_input().split(','))
        m = {}
        for n in cards:
            if m.has_key(n):
                m[n] += 1
            else:
                m[n] = 1
        print check(sorted(m.keys()), sorted(m.values()))
    except EOFError:
        break
