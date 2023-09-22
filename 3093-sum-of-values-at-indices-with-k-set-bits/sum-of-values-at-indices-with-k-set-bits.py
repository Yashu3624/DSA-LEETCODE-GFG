class Solution:
    def sumIndicesWithKSetBits(self, nums: List[int], k: int) -> int:
        cnt_bit = []
        sum = 0 
        for i in range(0,len(nums)):
            b = bin(i)[2:]
            cnt_bit.append(b.count('1'))
        for i in range(len(cnt_bit)):
            if cnt_bit[i]==k:
                sum += nums[i]
        return sum
            
                
        