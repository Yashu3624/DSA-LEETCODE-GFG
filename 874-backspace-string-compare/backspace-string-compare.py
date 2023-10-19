class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        s1 = []
        t1 = []
        s = list(s)
        t = list(t)
        for i in range(len(s)):
            try:            
                if s[i]=='#':
                    s1.pop()
                else:
                    s1.append(s[i])
            except:
                continue
                
        for j in range(len(t)):
            try:
                if t[j]=='#':
                    t1.pop()
                else:
                    t1.append(t[j])
            except:
                continue
        s1="".join(s1)
        t1="".join(t1)
        if s1==t1:
            return True
        else:
            return False