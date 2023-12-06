class Solution {
public:
    int totalMoney(int n) {
        vector<int>dp(n,-1);
        dp[0] = 1;
        for(int i = 1 ; i < n ; i++){
            if(i<=6){
                dp[i] = dp[i-1]+1;
            }
            else{
                dp[i] = dp[i-7]+1;
            }
        }
        int sum = 0 ;
        for(int i = 0 ; i < n ; i++){
            sum += dp[i];
        }
        return sum;
           
        }
    
};