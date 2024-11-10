class Solution:
    def minimumSubarrayLength(self, nums: List[int], k: int) -> int:
        if max(nums)>=k:
            return 1
        l=[]
        for i in range(len(nums)):
            for j in range(i, len(nums)):
                x=0
                lis=nums[i:j+1]
                for p in lis:
                    x=x|p
                print(x)
                if x>=k:
                    l.append(len(nums[i:j+1]))
        if len(l)==0:
            return -1
        return min(l)