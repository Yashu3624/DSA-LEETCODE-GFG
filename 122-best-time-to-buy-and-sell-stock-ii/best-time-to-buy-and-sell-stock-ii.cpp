class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size() ; 
        int dp0 = 0; 
        int dp1 = -prices[0];  
        for (int i = 1; i < n; i++) {
            int buy = -prices[i] + dp0;
            int sell = prices[i] + dp1;
            dp0 = max(dp0, sell);
            dp1 = max(dp1, buy);
        }

        return dp0;
    }
};