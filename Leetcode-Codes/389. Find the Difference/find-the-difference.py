class Solution(object):
    def findTheDifference(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: str
        """
        return next((char for char in t if t.count(char) != s.count(char)), None)