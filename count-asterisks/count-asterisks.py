class Solution:
    def countAsterisks(self, s: str) -> int:
        res , bar = 0 , 0 
        for i  in range(len(s)):
            if s[i]=='*' and bar %2==0:
                res += 1
            if s[i]=='|':
                bar += 1
        return res    
