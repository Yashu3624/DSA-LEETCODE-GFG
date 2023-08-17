class Solution {
public:
    void bfs(int row , int col , vector<vector<int>>& vis , vector<vector<char>>& grid){
        vis[row][col] = 1;
        queue<pair<int,int>>q ;
        q.push({row,col});
        int n= grid.size() ;
        int m = grid[0].size();

        while(!q.empty()){
            int Row = q.front().first;
            int Col = q.front().second;
            q.pop();
            for(int delRow = -1 ; delRow<=1 ; delRow++ ){
                for(int delCol = -1 ; delCol <= 1 ; delCol++){
                    
                    int nRow  = Row + delRow ;
                    int nCol = Col + delCol ;
                    if(delRow!=0 && delCol!=0)
                    {
                        continue;
                    }
                    if(nRow>=0 &&  nRow<n && nCol >=0 && nCol<m && grid[nRow][nCol]=='1' && !vis[nRow][nCol]){
                        vis[nRow][nCol] = 1 ;
                        q.push({nRow,nCol});
                    }
                }
            }

        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n= grid.size() ;
        int m = grid[0].size();
        int cnt = 0 ;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    cnt++;
                    bfs(i,j,vis,grid);
                }
            }
        }
        return cnt;
        
    }
};