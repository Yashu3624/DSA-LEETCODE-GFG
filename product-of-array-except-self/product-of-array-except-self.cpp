class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size() ;
        vector<int>res;
        int ans = 1 ;
        for(int i = 0 ; i < n ; i++){
            ans *= nums[i];
            res.push_back(ans);
        }
        ans = 1 ;

        for(int i = n-1 ; i>0 ; i--){
            res[i] = res[i-1]*ans;
            ans *= nums[i];
        }
        res[0] = ans ;

        return res ;
    }
};