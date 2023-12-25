class Solution {
public:
    int solve(int idx , string s , vector<int>&dp){
        if(idx==s.size()){
            return 1 ;
        }
        if(s[idx]=='0') return 0 ;
        if(dp[idx]!=-1) return dp[idx];
        int two = 0 ; 
        if (idx+1 < s.size() && (s[idx]=='1' || (s[idx]=='2' && s[idx+1]<='6'))){
            two += solve(idx+2,s,dp) ;
        }
        int one = solve(idx+1,s,dp) ;
             return dp[idx] = one+two ;
    }     
    
    int numDecodings(string s) {
        vector<int>dp(s.size()+1,-1);
        return solve(0,s,dp);
    }
};