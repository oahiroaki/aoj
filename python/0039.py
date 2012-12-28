rule = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}

while True:
    try:
        line = raw_input()
        nums = [rule[c] for c in list(line)] + [0]
        print sum(map(
            lambda (a, b): -a if a < b else a,
            [(a, b) for a, b in [nums[i:i+2] for i in range(len(line))]]))

    except EOFError:
        break
    
