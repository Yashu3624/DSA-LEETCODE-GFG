class Solution:
    def restoreString(self, s: str, idx: List[int]) -> str:
        res = ['']*len(s)
        for i in range(len(s)):
            res[idx[i]] = s[i]
        return "".join(res)