# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
'''
i didn't used any standard algorithm this approach just came into my mind and i implemented 
basically we get number of nodes and if even number of  nodes then we have to take second middle 
hence just add one to floor value eg if 6 is length then it will be 6/2=3 --> 3+1 = 4 
(this was for even case) and for odd number of nodes just need to 
take ceil value (round off to larger integer) eg; counter = 5 then 5/2 = 2.5 and ceil(2.5)=3 
and print idx th node 
'''
import math
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None:
            return head
        self.temp = head
        counter = 0
        while self.temp is not None:
            counter+=  1
            self.temp = self.temp.next
        if counter%2==0:
            idx = math.floor(counter/2)+1
        else:
            idx = math.ceil(counter/2)
        x=1
        self.temp = head
        while self.temp:
            if x==idx:
                return self.temp
            x+=1
            self.temp = self.temp.next

        