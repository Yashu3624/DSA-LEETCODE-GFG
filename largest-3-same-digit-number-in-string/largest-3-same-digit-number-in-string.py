class Solution:
    def largestGoodInteger(self, num: str) -> str:
        res = []
        if len(num)<3:
            return ""

        for i in range(len(num)-2):
            if num[i]==num[i+1] and num[i+1]==num[i+2]:
                res.append(num[i:i+3])
        res = sorted(res)
        if len(res):
            return res[-1]
        return ""
        