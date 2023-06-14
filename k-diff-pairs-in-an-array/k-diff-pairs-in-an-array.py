class Solution:
    def findPairs(self, nums: List[int], k: int) -> int:
        res = set()
        i = 0
        j = 1
        nums.sort()
        while j < len(nums):
            if nums[j]-nums[i] == k:
                res.add((nums[i], nums[j]))
                i += 1
                j = i+1
            elif nums[j]-nums[i] > k:
                i += 1
                j = i+1
            else:
                j += 1

        return len(res)
