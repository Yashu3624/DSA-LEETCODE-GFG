class Solution {
public:
    int dfs(int x , int y ,vector<vector<int>>& matrix , vector<vector<int>>& dp ){
        if(dp[x][y]!=0) return dp[x][y] ; 
        int n = matrix.size() ; 
        int m = matrix[0].size() ; 
        int maxi = 1 ;  
        int dx[4] = {0, 0, -1, 1};
        int dy[4] = {-1, 1, 0, 0};
        for(int i = 0 ; i < 4 ; i++){
            int nx = x + dx[i] ; 
            int ny = y + dy[i] ; 
            if(nx>=0 && nx < n && ny>=0 && ny < m && matrix[nx][ny] > matrix[x][y]){
                maxi = max(maxi , 1 + dfs( nx, ny,matrix  ,dp)) ; 
            }
        }
        dp[x][y] = maxi ; 
        return maxi ;       
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n = matrix.size() ; 
        int m = matrix[0].size() ; 
        int cnt = 1 ; 
        vector<vector<int>>dp(n,vector<int>(m,0)) ; 
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                cnt = max(cnt , dfs(i,j,matrix,dp)) ; 
            }
        }
        return cnt ; 
    }
};