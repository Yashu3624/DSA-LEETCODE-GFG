class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        res = []
        l = sorted(score)
        l = l[::-1]
        for i in range(len(l)):
            if score[i]==l[0]:
                res.append("Gold Medal")
            elif score[i]==l[1]:
                res.append("Silver Medal")
            elif score[i]==l[2]:
                res.append("Bronze Medal")  
            else:
                ind = l.index(score[i])+1
                res.append(str(ind))
        return res          
