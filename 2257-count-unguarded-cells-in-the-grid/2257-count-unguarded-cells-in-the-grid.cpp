class Solution {
public:
    void solve(int i, int j, vector<vector<int>>& dp, int m, int n, int di, int dj){
      if( i < 0 || i >= m || j < 0 || j >= n ||dp[i][j]==1|| dp[i][j]==2){
            return  ;
      } 
      dp[i][j]  = 3 ; 
      solve(i+di,j+dj,dp,m,n,di,dj) ;
   
    }
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>>dp(m,vector<int>(n,0)) ; 
        for(auto& guard : guards){
            dp[guard[0]][guard[1]] = 1 ; 
        }
        for(auto& wall: walls ){
            dp[wall[0]][wall[1]] = 2 ; 
        }
        for(int i = 0 ; i < guards.size() ; i++){
            solve(guards[i][0]-1 , guards[i][1],dp,m,n,-1,0  ) ; 
            solve(guards[i][0]+1 , guards[i][1],dp,m,n,1,0  )  ;
            solve(guards[i][0] , guards[i][1]-1,dp,m,n,0,-1  ) ;
            solve(guards[i][0] , guards[i][1]+1,dp,m,n,0,1  ) ;
        }
        int cnt = 0 ; 
        for(int i = 0 ; i  < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(dp[i][j]==0)
                cnt++ ; 
            }
        }
        return cnt ; 
        


    }
};