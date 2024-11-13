class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin() , nums.end()) ; 
        long long i = 0 , j = nums.size()-1 , ans = 0 ; 
        while(i<j){
            if(nums[i]+nums[j] <= upper && nums[i]+nums[j] >= lower){
                int k = i+1 ;
                while(k<j){
                    if(nums[k]+nums[i]>=lower) break ;
                    k++ ;
                }
                ans += j-k+1 ;
                i++ ;
            }
            else if(nums[i]+nums[j] >upper){
                j-- ;
            }
            else{
                i++ ;
            }
        }
        return ans ; 
    }
};