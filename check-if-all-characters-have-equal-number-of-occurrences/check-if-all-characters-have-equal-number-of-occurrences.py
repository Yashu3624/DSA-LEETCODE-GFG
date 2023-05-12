class Solution:
    def areOccurrencesEqual(self, s: str) -> bool:
        res = []
        for i in set(s):
            res.append(s.count(i))
        if len(set(res))!=1:
            return False
        return True