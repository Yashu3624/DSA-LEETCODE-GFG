class Solution {
public:
    int findMaxOrSubSets(int idx , int res , vector<int>&nums , int sum , vector<vector<int>>&dp ){
        if(idx==nums.size()){
        if(res==sum){
            return 1 ;
        }
        return  0 ;
        }
        if(dp[idx][res]!=-1){
            return dp[idx][res] ;
        }
        int pick = findMaxOrSubSets(idx+1,res|nums[idx],nums , sum , dp) ;
        int  notPick = findMaxOrSubSets(idx+1,res,nums,sum,dp) ;
        return dp[idx][res] = pick+notPick ; 
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int sum = 0 ; 
        int n = nums.size();
        int cnt = 0 ; 
        for(int i : nums){
            sum |= i ;
        }
        vector<vector<int>>dp(n,vector<int>(sum+1,-1)) ;
         cnt = findMaxOrSubSets(0,0,nums,sum,dp) ;
        return cnt ;
    }
};