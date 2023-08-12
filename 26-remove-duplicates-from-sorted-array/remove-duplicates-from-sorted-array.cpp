class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0 , j = 1 ;
        while(i<=j && j<nums.size()){
            if(nums[i]==nums[j]){
                j += 1;
            }
            else{
                nums[i+1]=nums[j];
                i += 1;
            }
        }
        return i+1;
    }
};