class Solution:
    def canMakeArithmeticProgression(self, arr: List[int]) -> bool:
        arr = sorted(arr)
        i = 0
        j = 1 
        diff = arr[i]-arr[j]
        while (len(arr)-1 > j):
            if arr[i+1]-arr[j+1] != diff:
                return False
            i += 1
            j += 1
        return True