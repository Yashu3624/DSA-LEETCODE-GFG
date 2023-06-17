class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        m = max(nums)
        return nums.index(m)