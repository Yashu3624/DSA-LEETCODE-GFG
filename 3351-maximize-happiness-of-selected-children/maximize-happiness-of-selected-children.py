class Solution:
    def maximumHappinessSum(self, happiness, k):
        happiness.sort()
        n = len(happiness)
        cnt = 0
        ans = 0
        for i in range(n - 1, -1, -1):
            if happiness[i] - cnt >= 0:
                ans += happiness[i] - cnt
            else:
                ans += 0
            cnt += 1
            k -= 1
            if k == 0:
                break
        return ans