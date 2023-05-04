class Solution:
    def checkPerfectNumber(self, num: int) -> bool:
        sum = 1
        n = num
        if num==1:
            return False

        for i in range(2,int(num**0.5)+1):
            if num%i==0:
                sum += i+num//i
        if sum==n:
            return True
        else:
            return False
