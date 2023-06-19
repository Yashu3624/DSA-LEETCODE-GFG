class Solution:
    def sumOddLengthSubarrays(self, arr: List[int]) -> int:
        n = len(arr)
        res = 0 
        for i in range(1,n+1,2):
            for j in range(n-i+1):
                res += sum(arr[j:j+i])
        return res
