class Solution {
public:
    vector<int>generateRow(int row ){
        vector<int>ans ; 
        long long a = 1 ; 
        ans.push_back(1);
        for(int i = 1 ; i < row ; i++){
            a = a*(row-i);
            a = a/(i) ; 
            ans.push_back(a);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res ;
        for(int i = 1 ; i <= numRows ; i++){
            res.push_back(generateRow(i));
        }
        return res;
    }
};