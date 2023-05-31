class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        res = []
        ans = 1 
        n = len(nums)
        for i in range(n):
            ans *= nums[i]
            res.append(ans)
        ans =1 
       
        for i in range(n-1,0,-1):
            res[i] = res[i-1]*ans
            ans *= nums[i]
        res[0] = ans
        return res
