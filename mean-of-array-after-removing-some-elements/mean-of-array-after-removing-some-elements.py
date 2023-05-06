class Solution:
    def trimMean(self, arr: List[int]) -> float:
        arr = sorted(arr)
        n = len(arr)
        sum = 0
        per =int( (n*5)/100)
        ar = arr[per:n-per]
        for i in ar:
            sum += i
        res = sum/len(ar)
        return res
