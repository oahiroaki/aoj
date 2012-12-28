ALPA = 'abcdefghijklmnopqrstuvwxyz'
sets = dict(zip(list(ALPA), range(26)))
A_LIST = [n for n in range(1, 26) if n%2 != 0 and n%13 != 0]

def encode(word, a, b):
    return [(a*y+b)% 26 for y in [sets[c] for c in list(word)]]

def find(words):
    for a in A_LIST:
        for b in range(26):
            for word in words:
                if word == encode("this", a, b) or word == encode("that", a, b):
                    return (a, b)
                
for i in range(int(raw_input())):
    data = raw_input()
    a, b = find([[sets[c] for c in list(word)] for word in data.split(' ') if len(word) == 4])
    ans = dict(zip(encode(ALPA, a, b), list(ALPA)))
    print ' '.join([''.join([ans[n] for n in [sets[c] for c in list(word)]]) for word in data.split(' ')])
