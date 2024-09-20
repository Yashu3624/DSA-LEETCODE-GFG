class Solution:
    def check(t):
        return t==t[::-1]
    def shortestPalindrome(self, s: str) -> str:
        start = 0
        n = len(s) 
        end = n-1
        t = s 
        s = s[::-1]
        for i in  range(0,n):
            if t == t[::-1]:
                return t 
            else:
                t = t[0:i]+s[i]+t[i:]
        return t
        