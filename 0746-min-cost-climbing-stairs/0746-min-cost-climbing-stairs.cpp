class Solution {
public:
    int f(int i , vector<int>&cost,vector<int>&dp){
        if(i==1 || i==0) return 0;
        if(dp[i]!=-1) return dp[i] ;
        return dp[i] = min(f(i-1,cost,dp)+cost[i-1], f(i-2,cost,dp)+cost[i-2]);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n+1,-1);
        return f(n,cost,dp);
    }
};