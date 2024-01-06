class Solution {
public:
    int nxt(vector<vector<int>>& v, int i, int target) {
        int n = v.size();
        int l = 0;
        int h = n - 1;
        int res = n;
        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (v[mid][0] >= target) {
                res = mid;
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return res;
    }

    int f(vector<vector<int>>& v, int i, vector<int>& memo) {
        int n = v.size();
        if (i >= n)
            return 0;

        if (memo[i] != -1)
            return memo[i];

        int next = nxt(v, i + 1, v[i][1]);
        int taken = v[i][2] + f(v, next, memo);
        int notTaken = f(v, i + 1, memo);
        memo[i] = max(taken, notTaken);
        return memo[i];
    }

    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = startTime.size();
        vector<vector<int>> v(n, vector<int>(3, 0));
        for (int i = 0; i < n; i++) {
            v[i][0] = startTime[i];
            v[i][1] = endTime[i];
            v[i][2] = profit[i];
        }
        sort(v.begin(), v.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });

        vector<int> memo(n, -1);
        return f(v, 0, memo);
    }
};
