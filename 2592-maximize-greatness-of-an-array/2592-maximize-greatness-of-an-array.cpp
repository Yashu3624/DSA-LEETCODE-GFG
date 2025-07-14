class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ;
        int res = 0 ; 
        for(int i : nums){
            if(i > nums[res]){
                res++ ;
            }
        }
        return res ; 
    }
};