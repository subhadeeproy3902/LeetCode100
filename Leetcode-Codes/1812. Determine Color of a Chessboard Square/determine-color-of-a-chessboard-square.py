class Solution:
    def squareIsWhite(self, coordinates: str) -> bool:
        return False if (coordinates in ["a1","c1","e1","g1","b2","d2","f2","h2","a3","c3","e3","g3","b4","d4","f4","h4","a5","c5","e5","g5","b6","d6","f6","h6","a7","c7","e7","g7","b8","d8","f8","h8"]) else True