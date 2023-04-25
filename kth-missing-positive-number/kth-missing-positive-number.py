class Solution:
    def findKthPositive(self, arr: List[int], k: int) -> int:
        res = 0
        for i in range(1,arr[-1]+k+1):
            if i not in arr:
                res += 1
                if res==k:
                    return i 
                    
     
