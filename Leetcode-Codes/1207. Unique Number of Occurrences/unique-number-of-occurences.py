class Solution(object):
    def uniqueOccurrences(self, arr):
        """
        :type arr: List[int]
        :rtype: bool
        """
        occur = [arr.count(num) for num in set(arr)]
        return (len(occur) == len(set(occur)))
