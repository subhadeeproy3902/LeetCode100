class Solution:
    def beautifulArray(self, n: int) -> List[int]:
        if n == 1:
            return [1]

        o = self.beautifulArray((n + 1) // 2)
        e = self.beautifulArray(n // 2)

        return [2 * i - 1 for i in o] + [2 * i for i in e]