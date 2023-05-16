class Solution:
    def largestSumAfterKNegations(self, nums: List[int], k: int) -> int:
        while k>0:
            i = nums.index(min(nums))
            nums[i] = -nums[i]
            k -= 1
        sum = 0 
        for i in nums:
            sum += i
        return sum