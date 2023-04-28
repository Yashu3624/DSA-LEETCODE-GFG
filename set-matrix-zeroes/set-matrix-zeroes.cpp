class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        for(int i = 0 ; i < row ; i++){
            for(int j  = 0  ; j < col ; j++){
                if(matrix[i][j]==0){
                    for(int m = 0 ; m < row ; m++){
                        if(matrix[m][j]!=0){
                        matrix[m][j] = INT_MIN+1;
                    }
                    }
                    for(int n = 0 ; n < col ; n++){
                        if(matrix[i][n]!=0){
                        matrix[i][n]=INT_MIN+1;
                    }
                    }

                }
            }
        }


for(int i = 0 ; i < row ; i++){
    for(int j = 0 ; j < col ; j++){
        if(matrix[i][j]==INT_MIN+1)
        matrix[i][j]=0;
    }
}

    }
};