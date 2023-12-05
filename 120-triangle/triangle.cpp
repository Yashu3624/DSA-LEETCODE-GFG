class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size() ; 
        vector<int>prev(n,1e8),curr(n,1e8);
        prev[0] = triangle[0][0];

        for(int i = 1 ; i < n ; i++){
          
            for(int j = 0 ; j <= i ; j++){
                int up = triangle[i][j] + prev[j];
                int dg = triangle[i][j] ;
                if(j>0) dg += prev[j-1];
                else dg += 1e8;
                curr[j] = min(up,dg);
            }
            prev = curr;
        }
        int res = 1e8;
        for(int i  = 0 ; i < n ; i++){
            res = min(res,prev[i]);
        }
        return res;

    }
};