class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int res = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i ; j < nums.size() ; j++){
            int k =  nums[i]^nums[j];
            res = max(k,res);
        }
    }
    return res ;

    }
};