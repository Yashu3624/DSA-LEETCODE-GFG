class Solution:
    def minOperations(self, nums: List[int]) -> int:
        cnt = 0 

      
        counter = Counter(nums)
        for v, k in counter.items():
            if k==1:
                return -1
            if k%2==0 and k%3==0:
                cnt += k//3
            elif k%3==2 and k%2==0:
                cnt += k//3 + 1
            elif  k%3==1 and k%2==0:
                cnt += k//3 + 1 
            elif  k%3==0:
                cnt += k//3
            elif  k%3==1 and k%2!=0:
                cnt += k//3 + 1 
            elif  k%3==2 and k%2!=0:
                cnt += k//3 + 1 
            
        return cnt 
                
                
                