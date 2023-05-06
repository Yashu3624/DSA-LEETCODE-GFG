class Solution:
    def findFinalValue(self, nums: List[int], original: int) -> int:
        res = original
        flag = 1
        while flag:
            if res in nums :
                res *= 2
            else:
                flag = 0 
        return res