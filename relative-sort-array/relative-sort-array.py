class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
        res = []
        rem = []
        for i in arr2:

            s = arr1.count(i)
            for j in range(s):
                res.append(i)
        for i in arr1:
            if i not in arr2:
                rem.append(i)
        rem = sorted(rem)
        res += rem
        return res
