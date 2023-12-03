class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        int front[n];
        for(int i = 0 ; i < n ; i++){
            front[i] = triangle[n-1][i];
        }
        for(int i = n-2 ; i>=0 ;i--){
            int curr[n];
            for(int j = i ; j>= 0 ; j--){
                int down = triangle[i][j]+front[j];
                int dgnl = triangle[i][j]+front[j+1];
                curr[j] = min(down,dgnl);

            }
            for(int k = 0 ; k <= i ; k++){
                front[k] = curr[k];
            }
        }
        return front[0];
    }
};