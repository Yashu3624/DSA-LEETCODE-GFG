class Solution:
    def findMiddleIndex(self, nums: List[int]) -> int:
        i = 0 
        n = len(nums)
        while i<n:
            sum1 , sum2 = 0 ,0 
            for j in range(0,i):
                sum1 += nums[j]
            for k in range(i+1,n):
                sum2 += nums[k]
            if sum1==sum2:
                return i 
            i = i+1
        return -1