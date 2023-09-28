class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>res ;
        for(auto it : nums){
            if(it%2==0) res.push_back(it);
        }
        for(auto it:nums){
            if(it%2==1) res.push_back(it);
        }
        return res;
    }
};