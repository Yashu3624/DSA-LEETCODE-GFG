class Solution {
public:
    int solve(int i , int j , int n , int m , string s , string t,vector<vector<int>>&dp){
        if(j==m) return 1 ;
        if(i==n) return 0 ; 
        if(dp[i][j]!=-1) return dp[i][j] ;
        if(s[i]==t[j]){
            return dp[i][j] = solve(i+1,j+1 , n , m , s , t,dp) + solve(i+1,j,n,m,s,t,dp);
        }
        else{
            return dp[i][j] = solve(i+1 , j , n , m , s , t,dp) ;
        }
    }
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size() ; 
        vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 0));
        for(int i = 0 ; i <= n ; i++)dp[i][0] =1 ;
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ;j <= m ; j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j] = dp[i-1][j-1] + dp[i-1][j] ;
                }
                else dp[i][j] = dp[i-1][j] ;
            }
        }
        return dp[n][m] ;
    }
};