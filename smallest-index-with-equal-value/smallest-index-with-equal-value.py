class Solution:
    def smallestEqual(self, nums: List[int]) -> int:
        res = []
        for i in range(len(nums)):
            if i % 10 == nums[i] :
                res.append(i)
        if len(res)==0:
            return -1
        else:
            return min(res)


