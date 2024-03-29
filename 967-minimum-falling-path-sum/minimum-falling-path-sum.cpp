class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        for(int i = 0 ; i < m ; i++){
            dp[0][i] = matrix[0][i];
        }

        for(int i = 1 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                int up = dp[i-1][j]+matrix[i][j];
                int rd = matrix[i][j];
                if(j+1<m) rd += dp[i-1][j+1];
                else rd += 1e8;
                int ld = matrix[i][j];
                if(j>0) ld += dp[i-1][j-1];
                else ld += 1e8;
                 dp[i][j] = min(up,min(rd,ld));
            }
           
        }
        int mini = INT_MAX;
        for(int i = 0 ; i < m ; i++){
            mini = min(dp[n-1][i],mini);
        }
        return mini;
    }
};