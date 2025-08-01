class Solution {
public:
    vector<int>findRow( int n){
        long long ans =1 ; 
        vector<int>a ; 
        a.push_back(ans) ;
        for(int i = 1 ; i < n ; i++ ){
            ans = ans*(n-i)/i ;
            a.push_back(ans) ; 
        }
        return a ;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans ; 
        for(int i = 1 ; i <= numRows  ; i++ ){
            ans.push_back(findRow(i)) ;
        }
        return ans;
    }
};