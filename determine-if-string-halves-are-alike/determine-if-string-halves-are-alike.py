class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        s = s.lower()
        n = len(s)
        s1 = s[0:n//2]
        s2 = s[n//2:]
        cnt1 , cnt2 = 0 , 0
        vowels = ['a','e','i','o','u']
        for i in s1:
            if i in vowels:
                cnt1 += 1
        for i in s2:
            if i in vowels:
                cnt2 +=  1
        if cnt1==cnt2:
            return True
        return False
