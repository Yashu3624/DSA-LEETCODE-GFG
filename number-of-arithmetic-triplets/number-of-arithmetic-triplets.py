class Solution:
    def arithmeticTriplets(self, nums: List[int], diff: int) -> int:
        cnt = 0 
        n = len(nums)
        for i in range(n):
            if nums[i]+ diff in nums and nums[i]+diff+diff in nums:
                cnt += 1

        return cnt 
        