class Solution(object):
    def countQuadruplets(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        cnt = 0 
        for a in range(len(nums)):
            for b in range(a+1 , len(nums)):
                for c in range(b+1 , len(nums)):
                    for d in range(c+1,len(nums)):
                        if nums[a]+nums[b]+nums[c]==nums[d]:
                            cnt += 1
        return cnt