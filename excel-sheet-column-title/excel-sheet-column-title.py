class Solution:
    def convertToTitle(self, n: int) -> str:
        ans = []

        while n > 0 :
            n -= 1
            res = n%26
            n =n//26
            ans.append(chr(res+ord('A')))
        
        ans = ans[::-1]
        return "".join(ans)

        
            
