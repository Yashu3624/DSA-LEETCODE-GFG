class Solution {
public:
    int solve(int prev , int curr , vector<int>&nums, vector<vector<int>>&dp){
        if(curr==nums.size()) return 0 ;
        if(dp[curr][prev+1]!=-1) return dp[curr][prev+1] ; 

        int pick = 0 ; 
        if(prev==-1 || nums[prev]<nums[curr]){
            pick = 1+ solve(curr, curr+1 , nums,dp) ; 
        } 
        int notPick = solve(prev , curr+1 , nums,dp) ; 
        return dp[curr][prev+1] = max(pick , notPick) ;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size() ; 
        vector<vector<int>>dp(n, vector<int>(n+1 , -1)) ;
        return solve(-1, 0 , nums,dp) ; 
    }
};