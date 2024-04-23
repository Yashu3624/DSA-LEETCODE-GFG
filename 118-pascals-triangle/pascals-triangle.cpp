class Solution {
public:
    vector<int>findRow(int cols){
        long long ans = 1 ; 
        vector<int>temp;
        temp.push_back(ans);
        for(int i = 1 ; i< cols ; i++){
            ans = ans*(cols - i);
            ans = ans/(i);
         temp.push_back(ans);
        }
    return temp;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res ; 
        for(int i = 1 ; i <= numRows ;i++){
            res.push_back(findRow(i));
        }
        return res ;
    }
};