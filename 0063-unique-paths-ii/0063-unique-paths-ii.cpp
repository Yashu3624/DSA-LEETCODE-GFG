class Solution {
public:
    int solve(int r , int c , vector<vector<int>>&grid , int n , int m , vector<vector<int>>&dp){
        if(r==n-1 && c==m-1) return 1 ;
        if(r>=n || c>=m) return 0 ;
        if(grid[r][c]==1) return 0 ;
        if(dp[r][c]!=-1) return dp[r][c] ; 
        int right = solve(r,c+1 , grid , n , m,dp) ; 
        int down = solve(r+1 , c , grid , n , m,dp) ; 
        return  dp[r][c] = right+down ;

    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int n = grid.size() ; 
        int m = grid[0].size(); 
        vector<vector<int>>dp(n+1,vector<int>(m+1 , -1)) ; 
        if(grid[0][0]==1 || grid[n-1][m-1]==1) return 0 ; 
        return solve(0 , 0 , grid , n , m , dp) ;
    }
};