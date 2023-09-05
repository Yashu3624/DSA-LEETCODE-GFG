class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n  = grid.size() , m = grid[0].size();
        int i = 0 , j = m-1 ; 
        int res = 0;
        while(i<n && j>=0){
            if(grid[i][j]<0){
                j--;
                res += n-i;
            }
            else{
                i++;
            }
        }
        return res;
    }
};