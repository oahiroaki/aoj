SAMPLE_INPUT = """8 7 9 9
4 4 4 4
5 5 7 5
0 0 0 0"""

def add_operater(nums, memo):
    if len(nums) > 1:
        a, b = nums[0:2]
        add_operater([a + b] + nums[2:], memo + "+" + str(b))
        add_operater([a - b] + nums[2:], memo + "-" + str(b))
        add_operater([a * b] + nums[2:], memo + "*" + str(b))
    else:
        print memo, nums
        return nums

def change_order(nums):

def solve(line):
    nums = map(int, line.split())
    add_operater(nums, str(nums[0]))

change_order([8, 7, 9, 9])


# ((9 * (9 - 7)) - 8)
# 0
# ((7 * 5) - (5 * 5))
