class Solution:
    def sortString(self, s: str) -> str:
        s = list(s)
        res = ''
        while s :
            for i in sorted(set(s)):
                s.remove(i)
                res += i
            for i in sorted(set(s),reverse=True):
                s.remove(i)
                res += i 
        return res