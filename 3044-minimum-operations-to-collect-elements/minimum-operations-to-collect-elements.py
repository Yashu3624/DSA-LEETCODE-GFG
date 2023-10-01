class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        ans = [ i for i in range(1,k+1)]
        res = []
        
        while(len(ans)):
            if nums[-1] in ans:
                ans.remove(nums[-1])
            res.append(nums[-1])
            nums = nums[0:-1]
        return len(res)
                
            
        