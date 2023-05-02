class Solution:
    def mostWordsFound(self, s: List[str]) -> int:
        ans = 0 
        for i in s:
            res = i.split()
            if len(res)>ans:
                ans = len(res)
        return ans