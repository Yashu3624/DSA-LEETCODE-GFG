class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        res = defaultdict(int)
        
        for num in nums:
            res[num] += 1
        for ele , freq in res.items():
            if freq == 1:
                return ele
        return -1