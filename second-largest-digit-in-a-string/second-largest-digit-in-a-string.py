class Solution:
    def secondHighest(self, s: str) -> int:
        num = []
        for i in range(len(s)):
            if s[i]>='0' and s[i]<='9':
                num.append(int(s[i]))
        
        num = set(num)
        num = sorted(list(num))

        if len(num)<2:
            return -1
        return num[-2]