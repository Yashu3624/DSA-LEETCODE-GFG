class Solution:
    def findLHS(self, nums: List[int]) -> int:
        num = Counter(nums)
        k = num.keys()
        res = 0
        for i in k:
            if i-1 in k:
                if num[i-1]+num[i]>res:
                    res = num[i-1]+num[i]
        return res