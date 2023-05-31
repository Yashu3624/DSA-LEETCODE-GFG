class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        num = set(nums)
        i = 1 
        while i in num:
            i += 1
        return i 
                
        