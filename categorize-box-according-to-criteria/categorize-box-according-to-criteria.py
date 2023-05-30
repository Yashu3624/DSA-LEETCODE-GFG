class Solution:
    def categorizeBox(self, l: int, w: int, h: int, m: int) -> str:
        bulk , heavy = 0 , 0 
        vol = l*w*h 
        if l >= 10**4 or w >= 10**4 or h >= 10**4  or vol >= 10**9:
            bulk = 1
        if m >= 100:
            heavy = 1 
        if bulk == 1 and heavy == 1:
            return "Both"
        elif bulk == 0 and heavy == 0 :
            return "Neither"
        elif bulk == 1 and heavy == 0 :
            return "Bulky"
        elif heavy == 1 and bulk == 0 :
            return "Heavy"


