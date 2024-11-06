class Solution {
public:
    int solve(int idx , vector<int>& coins , int amount,vector<vector<int>>&dp){
        if(idx==coins.size()-1){
            if(amount%coins[idx]==0){
                return 1;
            }
            return 0 ; 
           
        }
        if(dp[idx][amount]!=-1) return dp[idx][amount] ;
        int notPick = 0 + solve(idx+1 , coins , amount,dp) ; 
        int pick = 0 ; 
        if(coins[idx]<= amount){
            if(solve(idx , coins , amount-coins[idx],dp)!=0)
            pick =  solve(idx , coins , amount-coins[idx],dp) ;
        }
        return pick+notPick ;
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size() ;
        vector<vector<int>>dp(n , vector<int>(amount+1 , -1)) ;
        return solve(0 , coins , amount,dp) ;
    }
};