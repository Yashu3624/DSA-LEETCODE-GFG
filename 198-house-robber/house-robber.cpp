class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size() ;
 
        
        int prev1 = nums[0];
        int prev = 0 ;
    
        for(int i = 1 ; i < n ; i++){
            int pick = nums[i] ;
            if(i>1) pick += prev;
            int notPick = 0 + prev1;
            int curr = max(pick,notPick);
            prev = prev1;
            prev1 = curr;
            
        }
        return prev1;
    }
};