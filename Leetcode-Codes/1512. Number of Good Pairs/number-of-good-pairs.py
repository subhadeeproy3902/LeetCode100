class Solution(object):
    def numIdenticalPairs(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n=len(nums)
        c=0
        for i in range(n):
            for j in range(n):
                if nums[i]==nums[j] and i<j:
                    c+=1
        return c