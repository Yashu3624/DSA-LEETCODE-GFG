class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        cnt  = []
        num = []
        res = []
        for i in nums:
            if i not in num:
                num.append(i)
                res.append(nums.count(i))
        for j in range(k):
            m =max(res)
            j = res.index(m)
            cnt.append(num[j])
            res[j] = -1
        return cnt
        