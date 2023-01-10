# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


from typing import List, Optional


class Solution:
    def averageOfLevels(self, root: Optional[TreeNode]) -> List[float]:
        if root is None:
            return []

        averages = []
        traversal_queue = [root]  # using collections.deque made this slower?

        while traversal_queue:
            num_nodes = len(traversal_queue)
            sum = 0
            for _ in range(num_nodes):
                curr_node = traversal_queue.pop(0)
                sum += curr_node.val

                if curr_node.left is not None:
                    traversal_queue.append(curr_node.left)
                if curr_node.right is not None:
                    traversal_queue.append(curr_node.right)

            averages.append(sum / num_nodes)

        return averages
