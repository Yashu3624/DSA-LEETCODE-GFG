class Solution:
    def digitCount(self, num: str) -> bool:
        res = 0 
        for i in range(len(num)):
            k = int(num[i])
            if num.count(str(i))==k:
                res += 1
        return len(num)==res
            
        