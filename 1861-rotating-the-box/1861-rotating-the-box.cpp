class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& grid) {
        int rows = grid.size() ; 
        int cols = grid[0].size() ; 
        for(int r = 0 ; r < rows ; r++){
            int p = 0 ; 
            for(int c  = 0 ; c < cols ; c++){
                if(grid[r][c]=='.'){
                    swap(grid[r][c],grid[r][p]) ; 
                    p++ ; 
                }
                else if(grid[r][c]=='*'){
                    p = c+1 ;
                }
            }
        }
        vector<vector<char>>res(cols , vector<char>(rows)) ; 
        for(int i = 0 ; i < rows ; i++){
            for(int j = 0 ; j < cols ; j++){
                 res[j][i] = grid[i][j]  ; 
            }
        }
          for (int i = 0; i < cols; i++) {
        reverse(res[i].begin(), res[i].end());
    }
        return res ; 
    }
};