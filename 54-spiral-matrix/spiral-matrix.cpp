class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>res ;
         
        int total = matrix.size()*matrix[0].size();
        int start_row = 0 ; 
        int end_row = matrix.size()-1; 
        int start_col = 0 ;
        int end_col =  matrix[0].size()-1 ;
        while(total>0){
            for(int i = start_col ; i <= end_col && total ; i++  ){
                res.push_back(matrix[start_row][i]);
                total--;
            }
            start_row++;
            for(int i = start_row ; i <= end_row && total ; i++){
                res.push_back(matrix[i][end_col]);
                total--;
            }
            end_col-- ;
            for(int i = end_col ; i >=start_col && total ; i--){
                res.push_back(matrix[end_row][i]);
                total--;
            }
            end_row--;
            for(int i = end_row ; i >= start_row && total ; i--){
                res.push_back(matrix[i][start_col]);
                total--;
            }
            start_col++;
        }
        return res;
    }
};