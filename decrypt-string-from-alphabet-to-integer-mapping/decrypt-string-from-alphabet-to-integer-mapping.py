class Solution:
    def freqAlphabets(self, s: str) -> str:
        res = []
        i = 0 
        while i < len(s):
            if i+2 < len(s) and s[i+2]=='#':
                val = int(s[i:i+2])
                alp = chr(val+96)
                res.append(alp)
                i += 3
            else:
                alp = chr(int(s[i])+96)
                res.append(alp)
                i += 1
        return "".join(res)