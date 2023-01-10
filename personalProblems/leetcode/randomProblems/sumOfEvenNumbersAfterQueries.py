from typing import List


class Solution:
    def sumEvenAfterQueries(
        self, nums: List[int], queries: List[List[int]]
    ) -> List[int]:
        #         ans = []

        #         for entry in queries:
        #             nums[entry[1]] += entry[0]
        #             s = 0
        #             for val in nums:
        #                 if val % 2 == 0:
        #                     s += val
        #             ans.append(s)

        #         return ans

        s = sum(x for x in nums if x % 2 == 0)
        ans = []

        for val, index in queries:
            if nums[index] % 2 == 0:
                s -= nums[index]
            nums[index] += val
            if nums[index] % 2 == 0:
                s += nums[index]
            ans.append(s)

        return ans
