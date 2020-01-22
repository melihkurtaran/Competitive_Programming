class Solution(object):
def findNumbers(self, nums):
    result = 0
    for n in nums:
        isOdd = len(str(n)) % 2
        if not isOdd:
            result += 1
    return result
