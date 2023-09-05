class Solution:
    def maxScore(self, nums: List[int]) -> int:
        nums = sorted(nums)
        nums = nums[::-1]
        res = []
        sum = 0 
        ans = 0 
        for i in range(len(nums)):
            sum += nums[i]
            if sum > 0 :
                ans += 1
        return ans

            
            