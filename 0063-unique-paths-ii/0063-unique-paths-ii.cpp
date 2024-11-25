class Solution {
public:
    
    int solve(int i , int j , int n , int m , vector<vector<int>>&grid,vector<vector<int>>&dp){
        if(i==n-1 && j==m-1) return 1 ; 
        if(i>=n || j>=m) return 0 ;
        if(grid[i][j]==1) return 0 ;
        if(dp[i][j]!=-1) return dp[i][j] ; 
         
        int right = solve(i+1,j,n,m,grid,dp); 
        int left = solve(i,j+1,n,m,grid,dp) ; 
        return dp[i][j] = left+right ;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
     
        int n = grid.size() ; 
        int m = grid[0].size() ; 
        vector<vector<int>>dp(n,vector<int>(m,-1)) ;
        if(grid[0][0]==1 || grid[n-1][m-1]==1) return 0 ;

        return solve(0,0,n,m,grid,dp) ; 
    }
};