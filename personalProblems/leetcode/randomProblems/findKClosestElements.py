from typing import List


class Solution:
    def findClosestElements(self, arr: List[int], k: int, x: int) -> List[int]:
        kClosest = []
        distances = []
        for i, val in enumerate(arr):
            distances.append([abs(val - x), i])

        distances.sort()

        for element in distances[:k]:
            kClosest.append(arr[element[1]])

        kClosest.sort()
        return kClosest
