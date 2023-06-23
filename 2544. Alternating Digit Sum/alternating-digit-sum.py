class Solution(object):
    def alternateDigitSum(self, n):
        """
        :type n: int
        :rtype: int
        """
        digits = [int(digit) for digit in str(n)]
        a=digits[1::2]
        b=digits[0::2]
        x=sum(a)*(-1)
        y=sum(b)
        print(x,y)
        return x+y

