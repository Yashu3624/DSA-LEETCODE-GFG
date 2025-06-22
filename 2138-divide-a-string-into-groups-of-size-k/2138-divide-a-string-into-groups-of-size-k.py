class Solution:
    def divideString(self, s: str, k: int, fill: str) -> List[str]:
        while len(s)%k!=0:
            s +=fill
        res = []
        i = 0
        for i in range(0,len(s),k):
            res.append(s[i:i+k])
        return res
        