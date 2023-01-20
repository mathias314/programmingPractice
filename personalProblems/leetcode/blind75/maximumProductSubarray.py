class Solution:
    def maxProduct(self, nums: List[int]):
        max_ending_here = nums[0]
        min_ending_here = nums[0]
        max_so_far = nums[0]

        for i in range(1, len(nums)):
            if nums[i] < 0:
                max_ending_here, min_ending_here = min_ending_here, max_ending_here

            max_ending_here = max(nums[i], nums[i] * max_ending_here)
            min_ending_here = min(nums[i], nums[i] * min_ending_here)
            max_so_far = max(max_so_far, max_ending_here)

        return max_so_far
