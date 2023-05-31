class Solution:
    def mostFrequentEven(self, nums: List[int]) -> int:
        res = -1 
        cnt = 0 
        num = set(nums)
        for i in num:
            if i%2==0:
                c = nums.count(i)
                if c>cnt :
                    cnt = c 
                    res = i 
                elif cnt == c:
                    if res >i:
                        res = i 
                        
                
        return res


        