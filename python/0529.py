import bisect

while True:
    try:
        n, m = [int(n) for n in raw_input().split()]
        if n == 0:
            break
        else:
            r = 0
            nums = [int(raw_input()) for i in range(n)] + [0]
            temp = sorted(set([x + y for x in nums for y in nums if x + y < m]))
            for num in temp:
                index = bisect.bisect_left(temp, m - num)
                if r < num + temp[index - 1]:
                    r = num + temp[index - 1]
            print r
    except EOFError:
        break
