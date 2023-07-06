class Solution:
    def countMatches(self, items: List[List[str]], ruleKey: str, ruleValue: str) -> int:
        res = []
        cnt = 0
        for i in items:
            if ruleKey=="color":
                res.append(i[1])
            elif ruleKey=="type":
                res.append(i[0])
            else:
                res.append(i[2])
        for i in res:
            if i==ruleValue:
                cnt+=1
        return cnt
