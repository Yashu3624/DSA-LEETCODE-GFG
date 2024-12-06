class Solution:
    def maxCount(self, banned: List[int], n: int, maxSum: int) -> int:
        x = [i for i in range(1,n+1)]
        x = list(set(x)-set(banned))
        x = sorted(x)
        currSum = sum(x)
        ans = len(x)
        while currSum > maxSum:
            currSum -= x.pop()
            ans -= 1
        return ans
              