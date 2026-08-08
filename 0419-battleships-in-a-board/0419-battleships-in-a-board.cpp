class Solution {
public:
    void dfs(int i , int j ,vector<vector<char>>& board,vector<vector<int>>&vis ){
        int n = board.size() ; 
        int m = board[0].size() ;
        if(i>=n || j >=m) return ;
        if(board[i][j]=='.') return ; 
        vis[i][j] = 1 ;
        dfs(i,j+1,board,vis) ; 
        dfs(i+1,j,board,vis) ; 
    }
    int countBattleships(vector<vector<char>>& board) {
        int n = board.size() ; 
        int m = board[0].size() ; 
        int cnt = 0  ; 
        vector<vector<int>>vis(n,vector<int>(m,0)) ; 
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(!vis[i][j] && board[i][j]=='X' ){
                    dfs(i,j,board,vis) ; 
                    cnt++ ; 
                }
            }
        }
        return cnt ; 
    }
};