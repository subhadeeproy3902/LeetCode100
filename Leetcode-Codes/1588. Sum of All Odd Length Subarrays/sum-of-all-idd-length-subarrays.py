class Solution(object):
    def sumOddLengthSubarrays(self, arr):
        """
        :type arr: List[int]
        :rtype: int
        """
        s = 0
        for i in range(1, len(arr) + 1, 2):
            for j in range(len(arr) - i + 1):
                x = arr[j:i+j]
                s+=sum(x)
        return s