class Solution:
    def addDigits(self, num: int) -> int:
        ans = 0 
        if num<=9:
            return num 
        while(num!=0):
            ans += num % 10 
            num //= 10 
            if(ans>9 and num==0):
                num = ans 
                ans = 0 
        return ans
        