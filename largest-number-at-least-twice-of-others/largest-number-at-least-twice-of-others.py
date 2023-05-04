class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
    
        m = max(nums)
        ind = nums.index(m)
        for i in nums:
            if i*2>m and i!=m:
                ind = -1
        return ind
