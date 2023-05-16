class Solution:
    def sortByBits(self, arr: List[int]) -> List[int]:
        arr = sorted(arr)
        l = []
        for i in arr:
            b = bin(i)
            b = b[2:]
            l.append([b.count("1"),i])
        l.sort()
        res = []
        for i in l:
            res.append(i[1])
        return res
        
        