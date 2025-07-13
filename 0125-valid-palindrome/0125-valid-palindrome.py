class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        k = []
        s = s.split()
        for i in s:
            for j in range(len(i)):
                if i[j].isalnum():
                    k.append(i[j])
        k = "".join(k)
        p = list(k)
        p =p[::-1]
        p = "".join(p)
        return  p == k