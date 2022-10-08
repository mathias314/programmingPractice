from itertools import combinations
import sys
from typing import List


class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        perms = combinations(nums, 3)
        bestSum = sys.maxsize

        for perm in perms:
            currSum = sum(perm)
            if abs(currSum - target) < abs(bestSum - target):
                bestSum = currSum

        return bestSum
