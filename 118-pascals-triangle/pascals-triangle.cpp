class Solution {
    vector<int>generateRow(int row){
        long long ans = 1 ;
        vector<int>Row ;
        Row.push_back(1);
        for(int col = 1 ; col<row;col++){
            ans = ans *(row-col);
            ans = ans/col;
            Row.push_back(ans);
        } 
        return Row;
    }
public:
    vector<vector<int>> generate(int r) {
        vector<vector<int>>ans;
        for(int i = 1 ; i <= r ; i++ ){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};