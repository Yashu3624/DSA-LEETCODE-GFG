class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        nums = Counter(nums)
        for ele , fre in nums.items():
            if fre == 1:
                return ele