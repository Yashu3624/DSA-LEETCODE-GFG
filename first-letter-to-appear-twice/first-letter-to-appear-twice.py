class Solution:
    def repeatedCharacter(self, s: str) -> str:
        res = []
        for i in range(len(s)):
            if s[i] in res:
                return s[i]
            else:
                res.append(s[i])
        