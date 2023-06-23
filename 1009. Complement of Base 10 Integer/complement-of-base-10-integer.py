class Solution(object):
    def bitwiseComplement(self, n):
        """
        :type n: int
        :rtype: int
        """
        a=bin(n)
        b=str(a)
        c=b[2:]
        c = c.replace('0', 'A').replace('1', 'B')
        c = c.replace('B', '0').replace('A', '1')
        z=int(c, 2)
        return z