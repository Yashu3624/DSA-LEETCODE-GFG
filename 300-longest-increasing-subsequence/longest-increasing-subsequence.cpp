class Solution {
public:
    int lengthOfLIS(vector<int>& arr) {
        int n = arr.size();
        int maxi = 1 ;
        vector<int>dp(n+1,1);
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < i ; j++){
                if(arr[i]>arr[j]){
                    dp[i] = max(dp[i],1+dp[j]);
                }
            }
            maxi = max(maxi,dp[i]);
        }
        return maxi;
        
    }
};