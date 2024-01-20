class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        int mod = 1e9+7;
        long long res = 0 ;
        vector<int>dp(n,-1);
        stack<int>st ;
        for(int i = 0  ; i < n ; i++){
            while(!st.empty() && arr[i] <= arr[st.top()]){
                st.pop();
            }
            if(!st.empty()){
                int j = st.top();
                dp[i] = dp[j]+arr[i]*(i-j);
            }
            else dp[i] = arr[i]*(i+1);
            st.push(i);
        }
        for(int i : dp) {
            res += i ;
        }
        return (int)(res%mod);
        
    }
};