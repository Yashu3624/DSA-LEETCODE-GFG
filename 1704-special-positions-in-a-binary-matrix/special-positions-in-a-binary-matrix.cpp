class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        int res = 0 ;
        for(int i = 0 ; i < rows;i++){
            for(int j = 0 ; j < cols ; j++){
            if(mat[i][j]==1){
                int col = 0 ;
                int row = 0 ;
                for(int m = 0 ; m < rows ; m++){
                    col += mat[m][j];
                }
                for(int n = 0 ; n < cols ; n++){
                    row += mat[i][n];
                }
                if(col==1 and row==1){
                    res++;
                }
            }
            }
        }
        return res;
    }
    
};