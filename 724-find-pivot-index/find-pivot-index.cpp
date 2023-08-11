class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for(int i =  0 ; i < nums.size() ; i++){
            total += nums[i];
        }
        int l_sum = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            total -= nums[i];
            if(l_sum==total){
                return i;
            }
            l_sum += nums[i];
        }
        return -1;
    }
};