class Solution:
    def simplifiedFractions(self, n: int) -> List[str]:
        res = []
        ans = []
        for i in range(1,n+1):
            for j in range(i+1,n+1):
                if i/j not in res:
                    res.append(i/j)
                    ans.append(str(i)+'/'+str(j))
        return ans