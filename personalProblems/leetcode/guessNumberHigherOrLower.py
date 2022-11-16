# The guess API is already defined for you.
# @param num, your guess
# @return -1 if num is higher than the picked number
#          1 if num is lower than the picked number
#          otherwise return 0
# def guess(num: int) -> int:

class Solution:
    def guessNumber(self, n: int) -> int:
        r = n
        l = 1
        while(r >= l):
            mid = (r + l) // 2
            res = guess(mid)
            if res == 0:
                return mid
            elif res == -1:
                r = mid - 1
            elif res == 1:
                l = mid + 1
                
        return -1


        # for fun, can return __pick__ on leetcode :)