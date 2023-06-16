class Solution:
    def sumOfNumberAndReverse(self, num: int) -> bool:
        i = 1 
        if num == 0:
            return True
        while i < num :
            n = str(i)
            n = n[::-1]
            n = int(n)
            if n+i==num:
                return True
            i+=1
        return False