class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long max1 = INT_MIN ; 
        long long max2 = INT_MIN; 
        long long ans = 0 ; 
        long long diff = 0 ; 
        int n = nums.size() ;

        for(int i = 0 ; i < n-1 ; i++){
            if(nums[i]>max1){
                max1 = max2 = nums[i];
            }
            else max2 = nums[i];
            if(max1 == INT_MIN || max2 == INT_MIN) continue ;
            long long current = max1 -  max2;
            diff  = max(current , diff );
            long long current_max = diff*1LL*nums[i+1];
            ans = max(current_max , ans );

            
        }
        return ans<0 ? 0 : ans ;
    }
};