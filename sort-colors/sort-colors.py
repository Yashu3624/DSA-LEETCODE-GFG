class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        count = [0,0,0]
        for i in nums:
            count[i] += 1
        i = 0 
        for k in range(3):
            while count[k]>0:
                nums[i] = k 
                i += 1
                count[k] -= 1
                