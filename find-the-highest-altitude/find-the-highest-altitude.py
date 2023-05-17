class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        res = []
        sum = 0
        res.append(sum)
        for i in gain:
            sum += i
            res.append(sum)
        
        return max(res)