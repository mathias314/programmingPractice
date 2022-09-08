# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        def traverse(root, order):
            if root:
                traverse(root.left, order)
                order.append(root.val)
                traverse(root.right, order)

        order = []
        traverse(root, order)
        return order
