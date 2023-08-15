class Solution {
private:
    void bfs(int row, int col ,vector<vector<int>>& image , vector<vector<int>>& vis, int initial , int color , int delRow[] , int delCol[]){
        image[row][col] = color;
        int n = image.size() ; 
        int m = image[0].size();
        queue<pair<int,int>>q;
        q.push({row,col});
        vis[row][col] = 1;
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            int r = it.first;
            int c = it.second;
            for(int i = 0 ; i < 4 ; i++){
                int nRow = r + delRow[i];
                int nCol = c+delCol[i];
                if(nRow>=0 && nRow<n && nCol>=0 && nCol<m && image[nRow][nCol]==initial && vis[nRow][nCol]==0 ){
                    q.push({nRow,nCol});
                    vis[nRow][nCol] = 1;
                    
                    image[nRow][nCol] = color;;
                    
                }
            }
        }

    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size() ;
        int m = image[0].size() ;
        vector<vector<int>>vis(n,vector<int>(m,0));
        int initial = image[sr][sc];
        vector<vector<int>>temp = image ; 
        int delRow[]= {-1,0,1,0};
        int delCol[] = { 0 , 1 , 0 ,-1};
        bfs(sr,sc,image,vis , initial , color , delRow , delCol);
        return image;
    }

};