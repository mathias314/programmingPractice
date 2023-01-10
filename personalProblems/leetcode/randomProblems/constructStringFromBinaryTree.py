# Definition for a binary tree node.
from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def tree2str(self, root: Optional[TreeNode]) -> str:
        if root is None:
            return

        conversion = str(root.val)

        if root.left is not None:
            conversion += f"({self.tree2str(root.left)})"

        if root.right is not None:
            if root.left is None:
                conversion += "()"
            conversion += f"({self.tree2str(root.right)})"

        return conversion
