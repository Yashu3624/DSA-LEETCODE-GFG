class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size() ; 
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        for(int idx = n-1 ; idx >=0 ; idx--){
            for(int buy = 0 ; buy <= 1 ; buy++){
                for(int k = 1; k<3 ;k++){
                    if(buy){
                        dp[idx][buy][k] = max(0+dp[idx+1][1][k],dp[idx+1][0][k]-prices[idx]);
                    }
                    else{
                        dp[idx][buy][k] = max(0+dp[idx+1][0][k],dp[idx+1][1][k-1]+prices[idx]);
                    }
                }
            }
        }
        return dp[0][1][2];
    }
};