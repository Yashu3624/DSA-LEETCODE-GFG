class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size(); 
        vector<vector<int>>dp(n , vector<int>(n+1 , -1)) ; 
        return lis(-1 , 0 , nums,dp) ; 
    }
    int lis(int prev , int idx , vector<int>& nums , vector<vector<int>>&dp){
        if(idx==nums.size()) return 0 ; 
        if(dp[idx][prev+1]!=-1) return dp[idx][prev+1] ; 
        int pick = 0 ;
        if(prev==-1 || nums[prev] < nums[idx]){
            pick = 1 + lis(idx , idx+1 , nums , dp );
        }
        int notPick = lis(prev , idx+1 , nums , dp ) ; 
        return dp[idx][prev+1] = max(pick , notPick) ; 

    }
};