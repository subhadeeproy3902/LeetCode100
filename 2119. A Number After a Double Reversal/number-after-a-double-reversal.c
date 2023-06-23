class Solution(object):
    def isSameAfterReversals(self, num):
        """
        :type num: int
        :rtype: bool
        """
        x=str(num)
        a=x[::-1]
        b=int(a)
        c=str(b)
        if c[::-1]==x:
            return True
        return False