class Solution {
public:


    int solve(int i , int j , string s , string p , int n , int m , vector<vector<int>>&dp){
        if(i==n && j==m) return 1 ;
        if(j==m) return 0 ;
        if(dp[i][j]!=-1) return dp[i][j] ;
    if (p[j] == '*') {
            return dp[i][j] = solve(i, j + 1, s, p,n,m,dp) || (i < s.size() && solve(i + 1, j, s, p,n,m,dp));
        }
if(i < s.size() && (p[j] == '?' || s[i] == p[j])) return dp[i][j] =  solve(i + 1, j + 1, s, p, n, m,dp);
        return 0 ;
        

    }

    bool isMatch(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1)) ;
        return solve(0 , 0 , s , p , n , m , dp ) ; 

    }
};
