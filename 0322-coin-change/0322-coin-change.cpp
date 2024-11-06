class Solution {
public:
    int solve(int idx , vector<int>&coins , int amount){
        if(idx==coins.size()-1){
            if(amount%coins[idx]==0)
            return amount/coins[coins.size()-1] ;
            else return INT_MAX ;
        }
        int notPick = 0 + solve(idx+1,coins , amount) ; 
        int pick = INT_MAX ;
        if(coins[idx]<=amount){
            if(solve(idx , coins , amount-coins[idx])!=INT_MAX)
            pick = 1 + solve(idx , coins , amount-coins[idx]) ; 
        }
        return min(pick , notPick) ;
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size() ;
        int ans =  solve(0 ,coins , amount) ; 
        return (ans==INT_MAX)?-1: ans ;
    }
};