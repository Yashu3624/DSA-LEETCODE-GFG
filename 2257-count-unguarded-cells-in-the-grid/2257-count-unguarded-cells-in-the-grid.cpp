class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>>grid(m,vector<int>(n,0)) ; 
        int X[] = {-1,0,1,0} ; 
        int Y[] = {0,-1,0,1} ; 
        for(auto&g:guards){
            grid[g[0]][g[1]] = 1 ; 
        }
        for(auto&w:walls){
            grid[w[0]][w[1]] = 2 ; 
        }
        for(auto&g :guards){
            int x = g[0] ; 
            int y = g[1] ; 
            for(int i = 0 ; i <  4 ; i++){
                int dx = x+X[i] ; 
                int dy = y+Y[i] ; 
                while(dx>=0 && dx<m &&dy>=0 && dy<n && grid[dx][dy]!=2 &&  grid[dx][dy]!=1){
                     grid[dx][dy] = 3 ;
                     dx += X[i] ; 
                     dy += Y[i] ; 
                }
            }
        }
        int cnt = 0  ;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[i][j]==0){
                    cnt++ ; 
                }
            }
        }
        return cnt ; 
    }
};