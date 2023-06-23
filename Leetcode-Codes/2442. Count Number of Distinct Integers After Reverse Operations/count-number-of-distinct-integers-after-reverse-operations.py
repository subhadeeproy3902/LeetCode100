class Solution:
    def countDistinctIntegers(self, nums: List[int]) -> int:
        a=[]
        for i in nums:
            x=str(i)
            y=x[::-1]
            a.append(int(y))
        nums.extend(a)
        dc = len(set(nums))
        return dc