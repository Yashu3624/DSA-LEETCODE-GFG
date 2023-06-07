class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        num = list(set(nums))
        l = {i:nums.count(i) for i in num}
        for i in num:
            if l[i]>2:
                for j in range(l[i]-2):
                    nums.remove(i)
        return len(nums)
        
