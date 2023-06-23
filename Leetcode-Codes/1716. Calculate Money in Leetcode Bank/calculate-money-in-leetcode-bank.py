class Solution:
    def totalMoney(self, n: int) -> int:
        x=n//7
        y=n%7
        sumo=0
        if x>0:
            sumo+=x*(2*28+(x-1)*7)//2
        sumo+=(y*(y+1))//2+x*y
        return sumo