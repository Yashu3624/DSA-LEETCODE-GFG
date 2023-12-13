class Solution {
public:
    int f(int idx , int x , vector<int>& coins ,vector<vector<int>>&dp ){
        if(idx==0){
            if(x%coins[0]==0) return x/coins[0];
            else return INT_MAX;
        }
        if(dp[idx][x]!=-1) return dp[idx][x];
        int notPick = f(idx-1,x,coins,dp);
        int pick = INT_MAX ;
        if(coins[idx]<=x){
            int pick1 =  f(idx,x-coins[idx],coins,dp) ;
            if(pick1!=INT_MAX){
                pick = pick1+1;
            }
        }
        return dp[idx][x] = min(pick,notPick);




    }
    int coinChange(vector<int>& coins, int x) {
        int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(x+1,-1));
        int ans =  f(n-1,x,coins,dp);
        if(ans>=INT_MAX) return -1 ;
        return ans;
    }
};