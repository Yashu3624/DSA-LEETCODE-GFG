class Solution {
public:
    int f(int n , vector<int>&a , vector<int>&dp){
        if(n==0) return a[n];
        if(n<0) return 0 ;
        if(dp[n]!=-1) return dp[n];
        int pick  = a[n]+f(n-2,a,dp);
        int notPick = 0 + f(n-1,a,dp);
        return dp[n]=max(notPick , pick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size() ; 
        vector<int>dp(n+1 , -1);
        return f(n-1, nums ,dp);
    }
};