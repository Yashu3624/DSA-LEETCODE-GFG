class Solution:
    def sortByBits(self, arr: List[int]) -> List[int]:
        arr = sorted(arr)
        ans = []
        for i in arr:
            b = bin(i)
            b = b[2:]
            ans.append([b.count("1"),i])
        ans = sorted(ans)
        res = []
        for i in ans:
            res.append(i[1])
        return res
        