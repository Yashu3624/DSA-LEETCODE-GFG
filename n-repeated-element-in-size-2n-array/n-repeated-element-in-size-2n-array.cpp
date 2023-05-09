class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        int k = n/2;
        int ans = 0 ;
        for(int i = 0 ; i < n ; i++){
            int count  = 1 ;
            for(int j = i+1 ; j < n ; j++){
                if(nums[i]==nums[j])
                    count++;

            }
            if(count==k){
                ans = nums[i];
                break ;
            }
        }
        return ans;
    }
};