# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head.next:
            return None

        ogHead = head
        size = 0
        while head:
            size += 1
            head = head.next

        head = ogHead

        middle = size // 2

        i = 0
        while head and i < middle - 1:
            head = head.next
            i += 1

        head.next = head.next.next

        return ogHead
