class Solution {
public:
    int f1(int n , vector<int>&a , vector<int>&dp){
        if(n==1) return a[n];
        if(n<=0) return 0  ;
        if(dp[n]!=-1) return dp[n];
        int pick = a[n] + f1(n-2 , a, dp);
        int notPick = 0 + f1(n-1,a,dp);
        return dp[n] = max(pick , notPick);
    }
    int f2(int n , vector<int>&a , vector<int>&dp){
        if(n==a.size()-2) return a[n];
        if(n>=a.size()-1) return 0 ;

        if(dp[n]!=-1) return dp[n];
        int pick = a[n] + f2(n+2 , a , dp);
        int notPick = 0 + f2(n+1 ,a , dp);
        return dp[n] = max(pick,notPick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size() ; 
        if(n==1) return nums[0];
        vector<int>dp1(n+1,-1);
        vector<int>dp2(n+1,-1);
        int ans1 = f1(n-1, nums,dp1);
        int ans2 = f2(0 , nums , dp2);
        return max(ans1,ans2);

    }
};