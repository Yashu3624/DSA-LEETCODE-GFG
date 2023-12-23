class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size() ; 
       vector<int>dp(2,0);
       vector<int>curr(2,0);
        dp[0] = 0 ; 
        dp[1] = -prices[0];
        if(n<=1) return 0 ; 
        for(int i = 1 ; i < n ; i++){
            int buy = -prices[i]+dp[0];
            int sell = prices[i]+dp[1];
            curr[0] = max(dp[0],sell);
            curr[1] = max(dp[1],buy);
            dp = curr ;
        }
        return dp[0];
    }
};