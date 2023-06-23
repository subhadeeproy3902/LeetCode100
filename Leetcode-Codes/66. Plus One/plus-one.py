class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        num = int(''.join(map(str, digits)))
        z=num+1
        digits = [int(digit) for digit in str(z)]
        return digits