class Solution {
public:
    bool isSafe(int row , int col , vector<string>&res , int n ){
        int drow = row ; 
        int dcol = col ; 
        while(row>=0 && col>=0){
            if(res[row][col]=='Q') return false ; 
            row--;
            col--;
        }
        row = drow ; 
        col = dcol ; 
        while(col>=0){
            if(res[row][col]=='Q') return false ;
            col--;
        }
        row = drow ; 
        col = dcol ; 
        while(row<n && col>=0){
            if(res[row][col]=='Q') return false ;
            row++;
            col--;
        }
        return true ;
    }
    void solve(int col , vector<string>&res , vector<vector<string>>&ans , int n){
        if(col==n){
            ans.push_back(res);
            return ; 
        }
        for(int row = 0 ; row < n ; row++){
            if(isSafe(row,col,res,n)){
                res[row][col] = 'Q';
                solve(col+1,res,ans,n);
                res[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans ; 
        vector<string>res(n) ; 
        string s(n,'.');
        for(int i = 0 ; i < n ; i++){
            res[i] = s;
        }
        solve(0,res,ans,n);
        return ans;
    }
};