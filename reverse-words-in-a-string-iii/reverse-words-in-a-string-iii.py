class Solution:
    def reverseWords(self, s: str) -> str:
        rev = s.split()
        res = []
        for i  in range(len(rev)):
            k = rev[i]
            k = k[::-1]
            res.append(k)
        return " ".join(res)
            