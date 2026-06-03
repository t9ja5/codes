class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        c=0
        if nums is None:
            return 0
        for i in range(len(nums)-1):
            for j in range(i+1,len(nums)):
                if nums[i]==nums[j] and i<j:
                    c+=1
        return c
