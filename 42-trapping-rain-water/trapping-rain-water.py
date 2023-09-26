class Solution:
    def trap(self, height: List[int]) -> int:
        ans = 0 
        for i in range(len(height)):
            lm = max(height[0:i+1])
            rm = max(height[i:len(height)])
            ans += min(lm,rm)-height[i]
        return ans
        