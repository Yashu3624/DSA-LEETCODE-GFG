class Solution {
public:
    int f(int idx , vector<int>&arr , int k, vector<int>&dp){
        if(idx==arr.size()) return 0 ;
        int n = arr.size() ;
        if(dp[idx]!=-1) return dp[idx] ;
        int len = 0 ; 
        int  maxi = INT_MIN ; 
        int maxAns = INT_MIN ;
        for(int i = idx ; i < min(n,idx+k) ; i++){
            len++ ; 
            maxi = max(maxi , arr[i]) ; 
            int sum = len*maxi + f(i+1 ,arr , k,dp) ; 
            maxAns = max(maxAns,sum) ;
        }
        return dp[idx] = maxAns ;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size() ; 
        vector<int>dp(n,-1) ; 
        return f(0  , arr  , k ,dp) ; 

    }
};