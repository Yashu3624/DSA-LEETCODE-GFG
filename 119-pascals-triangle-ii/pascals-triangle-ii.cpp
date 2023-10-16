class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long ans = 1 ; 
        vector<int>res(rowIndex+1);
        for(int i = 0 ; i <= rowIndex ; i++){
            res[i] = ans;
            ans = ans*(rowIndex-i);
            ans = ans/(i+1);
            
        }
        return res;

    }
};