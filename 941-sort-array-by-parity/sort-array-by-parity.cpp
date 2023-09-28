class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i  = 0 ; 
        int j = nums.size()-1 ;
        vector<int>res(nums.size());
        for(auto it: nums){
            if(it%2==0){
                res[i++] = it;
            }
            else{
                res[j--] = it;
            }
        }
        return res;
    }
};