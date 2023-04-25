class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        res = int(num**0.5)
        if res**2 == num :
            return True
        else:
            return False
            
        