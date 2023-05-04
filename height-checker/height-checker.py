class Solution:
    def heightChecker(self, nums: List[int]) -> int:
        s = sorted(nums)
        cnt = 0
        for i in range(len(nums)):
            if s[i]!=nums[i]:
                cnt += 1
        return cnt

