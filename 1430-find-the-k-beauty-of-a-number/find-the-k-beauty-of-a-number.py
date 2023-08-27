class Solution:
    def divisorSubstrings(self, num: int, k: int) -> int:
        cnt = 0 
        s = str(num)
        for i in range(len(s)-k+1):
            n = int(s[i:i+k])
            if n!=0 and num % n==0:
                cnt += 1
        return cnt