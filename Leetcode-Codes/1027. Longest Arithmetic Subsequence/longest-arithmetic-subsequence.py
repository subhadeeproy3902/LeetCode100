class Solution(object):
    def longestArithSeqLength(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        a = {}
        n=len(nums)
        for i in range(n):
            for j in range(i+1,n):
                x=nums[j]-nums[i]
                a[j,x]=a.get((i,x),1)+1
        
        return max(a.values())
