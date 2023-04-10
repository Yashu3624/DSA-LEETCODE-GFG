class Solution:
    def findGCD(self, nums: List[int]) -> int:
        nums = sorted(nums)
        return gcd(nums[0],nums[-1])
        