class Solution:
    def threeConsecutiveOdds(self, arr: List[int]) -> bool:
        n = len(arr)
        for i in range(1, n-1):
            if arr[i]%2==1 and arr[i-1] %2==1 and arr[i+1]%2==1:
                return True
        return False