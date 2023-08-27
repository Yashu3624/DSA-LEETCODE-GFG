class Solution:
    def minimumPossibleSum(self, n: int, target: int) -> int:
        res = set()
        i = 1
        while len(res)<n:
            if target - i not in res:
                res.add(i)
            i += 1
        return sum(res)
        