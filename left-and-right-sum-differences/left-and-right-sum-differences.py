class Solution:
    def leftRigthDifference(self, nums: List[int]) -> List[int]:
        sum1 = []
        res = 0 
        sol=[]
        for i in range(len(nums)):
            sum1.append(res)
            res += nums[i]
        nums = nums[::-1]
        ans = 0 
        sum2 = []
        for i in range(len(nums)):
            sum2.append(ans)
            ans += nums[i]
        sum2 = sum2[::-1]
        for i in range(len(nums)):
            sol.append(abs(sum1[i]-sum2[i]))
        return sol
