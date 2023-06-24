class Solution(object):
    def sumBase(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: int
        """
        nk = ""
        while n > 0:
            digit = n % k
            nk = str(digit) + nk
            n //= k
        s = sum(int(digit) for digit in nk)       
        return s