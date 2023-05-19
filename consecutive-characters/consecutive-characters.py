class Solution:
    def maxPower(self, s: str) -> int:
        cnt = 0
        maxi = 0
        for i in range(len(s)-1):
            if s[i]==s[i+1]:
                cnt += 1
                if cnt > maxi:
                    maxi = cnt 
            else:
                cnt = 0
                
        return maxi+1
            