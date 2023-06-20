class Solution:
    def findLonely(self, nums: List[int]) -> List[int]:
        num = Counter(nums)
        res = []
        for key , val in num.items():
            if val==1 and key+1 not in num and key-1 not in num:
                res.append(key)
        return res