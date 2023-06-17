class Solution:
    def divideArray(self, nums: List[int]) -> bool:
        n = set(nums)
        for i in n:
            if nums.count(i)%2 != 0:
                return False
        return True