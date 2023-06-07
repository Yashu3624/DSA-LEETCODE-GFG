class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res ;
        int l = 0 , r = nums.size()-1;
        while(l<r){
            if(nums[l]+nums[r]==target){
                res.push_back(l+1);
                res.push_back(r+1);
            }
            if(nums[l]+nums[r]>target){
                r -= 1;
            }
            else{
                l ++;
            }
        }
        return res;
    }
};