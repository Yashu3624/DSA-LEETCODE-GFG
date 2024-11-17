class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n = nums.size() ;
        long long  sum = 0 ;
        int mini = INT_MAX ;
        deque<pair<long long ,int>>dq ; 
        for(int i = 0 ; i < n ; i++){
            sum +=  nums[i] ; 
            if(sum>=k){
                mini = min(mini ,i+1) ; 
            }
            while(dq.size() && dq.back().first >= sum){
                dq.pop_back() ;
            
            }
            while(dq.size()  && dq.front().first <= sum-k){
                mini = min(mini , i - dq.front().second) ;
                dq.pop_front()  ;
            }
            dq.push_back({sum,i}) ; 
        }
        return (mini != INT_MAX) ? mini :-1 ;
    }
};