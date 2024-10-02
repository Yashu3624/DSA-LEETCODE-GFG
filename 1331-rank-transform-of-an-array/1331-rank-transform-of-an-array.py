class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        r = []
        rank=1
        d={}
        c = sorted(arr)
        for i in c :
            if i not in d:
                d[i] = rank
                rank += 1
        for i in arr:
            r.append(d[i])
        return r
                
        