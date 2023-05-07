class Solution:
    def countEven(self, num: int) -> int:
        cnt = 0 
        for i in range(2,num+1):
            k = i
            rem = 0
            while k!=0:
                rem += k%10
                k = k//10
            if rem%2==0:
                cnt += 1
        return cnt

