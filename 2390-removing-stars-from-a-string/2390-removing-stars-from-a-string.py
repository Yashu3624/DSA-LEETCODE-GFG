class Solution:
    def removeStars(self, s: str) -> str:
        l=[]
        for i in s:
            if i=="*":
                l.pop()
            else:
                l.append(i)
        
        return "".join(l)
                
        