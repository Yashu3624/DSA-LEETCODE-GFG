class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0 , end = nums.size()-1 , firstpos = -1 , lastpos = -1 ;
        while(start<=end){
            int mid = start + (end-start)/2 ;
            if(nums[mid]==target)
                firstpos = mid , end = mid-1;
            else if(nums[mid]>target)
                end = mid-1 ;
            else
                start = mid+1;
        }
         start = 0 , end = nums.size()-1 ;
        while(start<=end){
            int mid = start + (end-start)/2 ;
            if(nums[mid]==target)
                lastpos = mid , start = mid+1;
            else if(nums[mid]>target)
                end = mid-1 ;
            else
                start = mid+1;
        }
        return {firstpos , lastpos};
    }
};