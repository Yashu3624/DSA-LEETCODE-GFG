class Solution:
    def titleToNumber(self, n: str) -> int:
        res = 0 
        for i in n :
            res = res*26+(ord(i)-ord('A')+1)
        return res