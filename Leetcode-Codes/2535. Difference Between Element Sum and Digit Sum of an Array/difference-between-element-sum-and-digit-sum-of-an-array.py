class Solution(object):
    def differenceOfSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        x = ''.join(str(x) for x in nums)
        a = sum(nums)
        y = [int(digit) for digit in str(x)]
        b = sum(y)
        return (a-b)%1000000007