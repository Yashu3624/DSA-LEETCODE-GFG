class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans = 0 , sum = 0 ; 
        unordered_map<int,int>mp ; 
        int idx = 0 ; 
        while(idx<k && idx<nums.size()){
            mp[nums[idx]]++ ; 
            sum += nums[idx] ; 
            idx++ ;
        }
        if(mp.size()==k) ans = sum ; 
        while(idx<nums.size() ){
            mp[nums[idx]]++ ;
            mp[nums[idx-k]]-- ;
            if(mp[nums[idx-k]]==0) mp.erase(mp[nums[idx-k]]) ; 
            sum += nums[idx] ; 
            sum -= nums[idx-k] ; 
            if(mp.size()==k) ans = max(ans, sum) ; 
            idx++ ;
        }
        return ans ; 
    }
};