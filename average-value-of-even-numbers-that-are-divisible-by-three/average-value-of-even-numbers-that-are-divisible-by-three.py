class Solution:
    def averageValue(self, nums: List[int]) -> int:
        sum = 0 
        cnt = 0 
        for i in nums:
            if i % 2 == 0 and i%3==0 :
                sum += i 
                cnt += 1
        
        if cnt!=0:
            return sum//cnt
        return 0