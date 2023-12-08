class Solution {
public:
    bool f(int idx , int s , int sum ,vector<int>& arr , vector<vector<int>>&dp, int n  ){
        if(idx==n){
            return sum/2==s;
        }
        if(dp[idx][s]!=-1) return dp[idx][s];
        bool pick = f(idx+1,s+arr[idx],sum,arr,dp,n);
        bool notPick = f(idx+1,s,sum,arr,dp,n);
        return dp[idx][s] = (pick||notPick);
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0 ; 
        int n = nums.size() ; 
        for(int i = 0 ; i < n ; i++){
            sum += nums[i];
        }
        if(sum%2==1) return false;
        vector<vector<int>>dp(n,vector<int>(sum,-1));
        return f(0,0,sum,nums,dp,n);
    }
};