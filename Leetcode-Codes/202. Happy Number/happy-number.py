class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        def sq(n):
            s=0
            while n>0:
                d = n%10
                s+= d**2
                n//=10
            return s

        a=[]
        while n not in a:
            a.append(n)
            n=sq(n)
            if n==1:
                return True
        return False