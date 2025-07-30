class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi = *max_element(nums.begin() , nums.end()) ; 
        int n = nums.size() ; 
        int j = -1 ; 
        int res = -1 ; 
        for(int i = 0 ; i < n ; i++){
            if(nums[i]!=maxi){
                j = i ; 
            }
            res = max(res , i-j ) ; 
        }
        return res ;
    }
};