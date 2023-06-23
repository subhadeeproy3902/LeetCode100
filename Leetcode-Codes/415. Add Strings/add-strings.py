import sys

class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        if len(num1)>4000 or len(num2)>4000:
            sys.set_int_max_str_digits(len(num1) + len(num2) + 1)
        return str(int(num1) + int(num2))