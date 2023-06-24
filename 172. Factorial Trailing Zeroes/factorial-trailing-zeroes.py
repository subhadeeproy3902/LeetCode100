class Solution(object):
    def trailingZeroes(self, n):
        """
        :type n: int
        :rtype: int
        """
        def fact(n):
            if n == 0:
                return 1
            else:
                return n * fact(n - 1)
        
        x = fact(n)
        count = len(str(x)) - len(str(x).rstrip('0'))
        return count