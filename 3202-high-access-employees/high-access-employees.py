class Solution:
    def findHighAccessEmployees(self, access_times: List[List[str]]) -> List[str]:
        ans = defaultdict(list)
        for emp , time in access_times:
            ans[emp].append(int(time))
        res = []
        for emp , time in ans.items():
            time.sort()
            n = len(time)
            for i in range(n-2):
                if time[i+2]-time[i]<100:
                    res.append(emp)
                    break
        return res

