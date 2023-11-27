class Solution {
public:
    int rob(vector<int>& nums) {
        int prev1 = nums[0];
        int prev2  = 0 ; 
        int n = nums.size() ;
        for(int i = 1 ; i < n ; i++){
            int pick = nums[i] ;
            if(i>1) pick += prev2 ;
            int notPick = 0 + prev1 ; 
            int curr = max(pick,notPick);
            prev2 = prev1 ; 
            prev1 = curr ;
        }
        return prev1;
    }
};