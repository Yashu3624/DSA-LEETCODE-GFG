class Solution:
    def simplifiedFractions(self, n: int) -> List[str]:
        res = {}
        ans = []
        for i in range(1,n+1):
            for j in range(i+1,n+1):
                if i/j not in res:
                    res[i/j]=1
                    ans.append(f"{i}/{j}")
        return ans
        