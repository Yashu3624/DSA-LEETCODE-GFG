class Solution {
public:
    int maxMoves(vector<vector<int>>& grid) {
        int maxi =0 ;
        int n = grid.size() ;
        int m = grid[0].size() ; 
        vector<vector<int>>vis(n,vector<int>(m,0)) ; 
        int X[] = {-1,0,1};
        int Y[] = {1 , 1 , 1} ; 
        queue<pair<pair<int,int>,int>>q ; 
        for(int i = 0 ; i < grid.size() ;i++){
            q.push({{i,0}, 0}) ;
        }
        while(!q.empty()){
            auto it = q.front()  ; 
            q.pop(); 
            int x = it.first.first ;
            int y = it.first.second ; 
            int steps = it.second;
            for(int i = 0 ; i < 3 ; i++ ){
                int new_X = x + X[i] ; 
                int new_Y = y + Y[i]  ;
                if(new_X>=0 && new_X < grid.size() && new_Y>=0 && new_Y<grid[0].size() && grid[new_X][new_Y]>grid[x][y] && !vis[new_X][new_Y]){
                    q.push({{new_X , new_Y},steps+1}) ;
                    vis[new_X][new_Y] = 1;
                    maxi = max(maxi , steps+1) ;

                }
            }
        }
        return maxi ;
    }
};