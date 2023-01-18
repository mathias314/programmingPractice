from typing import List


class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        ans = [1 for _ in range(len(nums))]
        suffix_prod = 1

        for i in range(1,n):
            ans[i] = ans[i-1] * nums[i-1]
        for i in range(n-1,-1,-1):
            ans[i] *= suffix_prod
            suffix_prod *= nums[i]
        return ans