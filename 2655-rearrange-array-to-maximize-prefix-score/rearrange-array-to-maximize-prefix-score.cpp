class Solution {
public:
    int maxScore(vector<int>& nums) {
        long long sum = 0 ; 
        int res = 0 ;
        sort(nums.begin() , nums.end() , greater<int>());
        for(int i = 0 ; i < nums.size() ; i++ ){
            sum += nums[i];
            if(sum>0) res++;
        }
        return res;
    }
};