class Solution:
    def differenceOfSums(self, n: int, m: int) -> int:
        a = [ i for i in range(1,n+1) if i%m !=0]
        b = [ i for i in range(1,n+1) if i%m ==0]
        return sum(a)-sum(b)
    
        