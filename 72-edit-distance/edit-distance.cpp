class Solution {
public:
    int f(int i , int j  , string s , string t,vector<vector<int>>&dp){
        if(i<0) return j+1 ; 
        if(j<0) return i+1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j]){
            return 0 + f(i-1,j-1,s,t,dp);
        }
        return dp[i][j] = min(1+f(i,j-1,s,t,dp),min(1+f(i-1,j,s,t,dp),1+f(i-1,j-1,s,t,dp)));
    }
    int minDistance(string s, string t) {
        int n = s.size() ; 
        int m = t.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return f(n-1,m-1,s,t,dp);
    }
};