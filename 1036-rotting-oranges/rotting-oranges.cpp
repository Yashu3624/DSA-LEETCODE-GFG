class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size() ; 
        int m = grid[0].size() ;
         vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<pair<int,int>,int >> q ;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j] = 2 ;
                }
               
            }
        }
        int tm = 0 ;
        int delRow[] = {-1 , 0 , 1 , 0};
        int delCol[] = {0 , 1 , 0 ,-1};

        while(!q.empty()){

            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();

            tm = max(tm , t);

            for(int i = 0 ; i < 4 ;  i++){
                int nRow = r+delRow[i];
                int nCol = c+delCol[i] ; 

                if(nRow>=0 && nRow<n && nCol >= 0 && nCol<m && grid[nRow][nCol]==1 && vis[nRow][nCol]==0){
                    q.push({{nRow,nCol},t+1});
                    vis[nRow][nCol] = 2 ;
                }
            }
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j]==1 && vis[i][j]!=2)
                return -1;
            }
        }
        return tm ;
    }
};