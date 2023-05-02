class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long int res = 1 ;
        for(auto i : nums){
            res *= i*1ll ;
            res = res%1000000007 ;
        }
        if(res>0)
        return 1 ;
        else if(res<0)
        return -1 ;
        else
        return 0 ;
    }
};