class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0 , right = 0 ; 
        int n = nums.size() ; 
        int mini = INT_MAX ; 
        int sum =  0 ;
        while(right<n){
            sum += nums[right++] ; 
            while(sum>=target){
                mini = min(mini , right-left) ; 
                sum -= nums[left++] ;
            } 
        }
        return (mini==INT_MAX)?0:mini ; 
    }
};