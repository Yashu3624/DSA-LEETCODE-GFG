class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size() ; 
        vector<vector<int>>dp(n,vector<int>(n,1e8));
        dp[0][0] = triangle[0][0];
        for(int i = 1 ; i < n ; i++){
            dp[i][0] = triangle[i][0]+dp[i-1][0];
        }
        for(int i = 1 ; i < n ; i++){
            for(int j = 1 ; j <= i ; j++){
                int up = triangle[i][j] + dp[i-1][j];
                int dg = triangle[i][j] + dp[i-1][j-1];
                dp[i][j] = min(up,dg);
            }
        }
        int res = INT_MAX ; 
        for(int i = 0 ; i < n ; i++){
            res  = min(res,dp[n-1][i]);
        }
        return res;
    }
};