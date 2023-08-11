class Solution:
    def distinctDifferenceArray(self, nums: List[int]) -> List[int]:
        res = []
        for i in range(len(nums)):
            k = len(set(nums[i+1:]))
            j = len(set(nums[:i+1]))
            res.append(j-k)
        return res
        