class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:
        n = len(nums)
        k = n//2 
        l = k+1
        for i in nums:
            c = nums.count(i)
            if c==k:
                return i 
        
