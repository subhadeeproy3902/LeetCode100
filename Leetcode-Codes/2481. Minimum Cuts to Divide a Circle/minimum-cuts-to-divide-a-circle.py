class Solution(object):
    def numberOfCuts(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n==1: return 0
        if n==0: return 0
        if n%2==0:
            return n//2
        return n