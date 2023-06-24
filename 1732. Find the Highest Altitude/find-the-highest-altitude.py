class Solution(object):
    def largestAltitude(self, gain):
        """
        :type gain: List[int]
        :rtype: int
        """
        a = [0]
        s=0
        for i in gain:
            s+=i
            a.append(s)
        return max(a)
