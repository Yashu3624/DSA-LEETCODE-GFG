class Solution {
public:
    int sol2(int n , vector<int>&a , vector<int>&dp2){
        if(n==a.size()-2) return a[n];
        if(n>=a.size()-1) return 0 ;
        if(dp2[n]!=-1) return dp2[n];
        int pick = a[n] + sol2(n+2,a,dp2);
        int notPick = 0 + sol2(n+1,a,dp2);
        return dp2[n] = max(pick,notPick);
    }
    int sol1(int n ,vector<int>&a , vector<int>&dp1){
        if(n==1) return a[1];
        if(n<=0) return 0 ; 
        if(dp1[n]!=-1) return dp1[n];
        int pick = a[n] + sol1(n-2 , a , dp1);
        int notPick = 0+sol1(n-1 ,a,dp1);
        return dp1[n] = max(pick , notPick);
    }
    int rob(vector<int>& nums) {
        int n  = nums.size() ; 
        if(n==1) return nums[0] ;
        vector<int>dp1(n+1,-1);
        vector<int>dp2(n+1,-1);
        int ans1 = sol1(n-1,nums,dp1);
        int ans2 = sol2(0,nums,dp2);
        return max(ans1,ans2);
    }
};