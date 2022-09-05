# Definition for a Node.
from collections import deque
from typing import List


class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children


class Solution:
    def levelOrder(self, root: "Node") -> List[List[int]]:
        if root is None:
            return None

        q = deque([root])
        levels = []

        while q:
            current_level = []
            for _ in range(len(q)):
                current_node = q.popleft()
                current_level.append(current_node.val)
                for child in current_node.children:
                    q.append(child)
            levels.append(current_level)

        return levels
