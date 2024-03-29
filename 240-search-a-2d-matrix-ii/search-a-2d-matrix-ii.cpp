class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int j = m-1 ;
        int i = 0 ;
        while(i<n && j>=0){
            if(matrix[i][j]==target) return true ;
            else if(matrix[i][j]<target) i++;
            else j--;
        }
        return false;
    }
};