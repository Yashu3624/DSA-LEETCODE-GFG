class Solution {
public:
    int solve(vector<vector<int>>&dp , int n , int m , vector<vector<int>>&mat){
         if(n>=0 && m>=0 && mat[n][m]==1) return 0 ; 
        if(n==0 && m==0) return 1 ;
        if(n<0 || m<0 ) return 0 ; 
        if(dp[n][m]!=-1) return dp[n][m] ;
       
        int right = solve(dp,n-1,m,mat) ; 
        int down = solve(dp,n,m-1,mat);
        return dp[n][m] = right + down ;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size(); 
        int m = obstacleGrid[0].size(); 
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1)) ; 
        return solve(dp,n-1,m-1,obstacleGrid) ; 
    }
};