from sortedcontainers import SortedSet
class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
 
        
        nums = SortedSet(nums)
        res  = 0 
        cnt = 0 
        for num in nums:
            if num-1 in nums:
                cnt += 1
            else:
                res = max(res,cnt)
                cnt = 1
        res = max(res,cnt)
        return res