class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int n = grid.size() ; 
        int m = grid[0].size() ; 
        vector<vector<int>>dp(n,vector<int>(m,0));

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                int left , up = 0;
               if(i>=0 && j>=0  && grid[i][j]==1) dp[i][j] = 0 ;
               else if(i==0 && j==0) dp[i][j] = 1 ;
               else{
                    if(j>0)  left = dp[i][j-1];
                    else left  = 0 ;
                   if(i>0) up = dp[i-1][j];
                   else up = 0 ;
                   dp[i][j] = left+up;
               }
           
            }
        }
        return dp[n-1][m-1];
    }
};