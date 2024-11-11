class Solution {
public:
    bool solve(vector<int>&nums , int idx , int k){
        for(int i = idx ; i < idx+ k - 1 ; i++){
            if(nums[i]>=nums[i+1]) return false ;
        }
        return true ;
    }
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int  n = nums.size() ; 
        if(n<k*2) return false ; 
        for(int i = 0 ; i <= n-2*k ; i++){
            if(solve(nums , i , k ) && solve(nums , i+k , k)){
                return true ;
            }
        }
        return false; 
    }
};