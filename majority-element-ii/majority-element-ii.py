class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        cnt = Counter(nums)
        n  = len(nums)//3
        res = []
        for i in cnt :
            if cnt[i]>n:
                res.append(i)
        return res
        