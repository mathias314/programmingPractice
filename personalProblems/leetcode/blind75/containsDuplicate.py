class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        counts = collections.Counter(nums)
        for count in counts.values():
            if count > 1:
                return True

        return False

        # found = set()
        # for num in nums:
        #     if num in found:
        #         return True
        #     found.add(num)

        # return False