class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size() ; 
        vector<vector<int>>dp(n,vector<int>(2,0));
        dp[0][0] = 0 ; 
        dp[0][1] = -prices[0];
        if(n<=1) return 0 ; 
        for(int i = 1 ; i < n ; i++){
            int buy = -prices[i]+dp[i-1][0];
            int sell = prices[i]+dp[i-1][1];
            dp[i][0] = max(dp[i-1][0],sell);
            dp[i][1] = max(dp[i-1][1],buy);
        }
        return dp[n-1][0];
    }
};