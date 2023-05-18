class Solution:
    def numWaterBottles(self, n: int, e: int) -> int:
        total = n 
        empty = 0 
        while(n>=e):
            empty = n%e
            count = n//e
            total += count
            n = count + empty
        return total
        