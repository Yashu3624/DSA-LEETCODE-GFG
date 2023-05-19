class Solution:
    def numberOfPairs(self, nums: List[int]) -> List[int]:
        res = []
        pairs=0
        num = list(set(nums))
        for i in range(len(num)):
            cnt = nums.count(num[i])
            if cnt%2!=0:
                res.append(num[i])
            pairs += cnt//2
        return [pairs,len(res)]
        