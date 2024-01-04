class Solution {
public:
    int f(int i, int j, string& s, string& p, vector<vector<int>>& dp) {
        if (i == 0 && j == 0) return 1;
        if (j == 0) return 0;
        if (i == 0) {
            for (int jj = 1; jj <= j; ++jj) {
                if (p[jj - 1] != '*') return 0;
            }
            return 1;
        }
        if (dp[i][j] != -1) return dp[i][j];

        if (s[i - 1] == p[j - 1] || p[j - 1] == '?') {
            return dp[i][j] = f(i - 1, j - 1, s, p, dp);
        }
        if (p[j - 1] == '*') {

            return dp[i][j] = (f(i, j - 1, s, p, dp) || f(i - 1, j, s, p, dp)) ? 1 : 0;
        }

        return dp[i][j] = 0;
    }

    bool isMatch(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        return f(n, m, s, p, dp) == 1;
    }
};
