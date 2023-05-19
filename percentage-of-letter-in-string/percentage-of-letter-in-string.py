class Solution:
    def percentageLetter(self, s: str, letter: str) -> int:
        cnt = s.count(letter)
        l = len(s)
        res = (cnt/l)*100
        return int(res)