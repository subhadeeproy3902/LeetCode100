class Solution(object):
    def countDigitOne(self, n):
        """
        :type n: int
        :rtype: int
        """
        c = 0
        x = 1
        while x <= n:
            dig = (n // x) % 10
            hdig = n // (x * 10)
            ldig = n % x
            if dig == 0:
                c += hdig * x
            elif dig == 1:
                c += hdig * x + ldig + 1
            else:
                c += (hdig + 1) * x
            x *= 10
        return c