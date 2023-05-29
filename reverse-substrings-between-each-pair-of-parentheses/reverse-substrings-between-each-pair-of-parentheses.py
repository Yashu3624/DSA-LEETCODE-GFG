class Solution:
    def reverseParentheses(self, s: str) -> str:

        res = []
        rev = []
        for i in range(len(s)):
            if s[i]==')':
                p = res.pop()
                while p!='(':
                    rev.append(p)
                    p = res.pop()
                res += rev
                rev = []
            else:
                res.append(s[i])
        return "".join(res)
        