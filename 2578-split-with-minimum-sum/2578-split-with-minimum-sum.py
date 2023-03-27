class Solution:
    def splitNum(self, num: int) -> int:
        s = str(num)
        s = sorted(s)
        s1 , s2  = "" , ""
        for i in range(len(s)):
            if i %2 == 0:
                s1 += s[i]
            else:
                s2 += s[i]
        n1 = int(s1)
        n2 = int(s2)
        return n1 + n2