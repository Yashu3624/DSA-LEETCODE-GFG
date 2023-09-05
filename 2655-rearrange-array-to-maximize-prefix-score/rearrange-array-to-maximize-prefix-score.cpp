class Solution {
public:
    int maxScore(vector<int>& nums) {
        long long sum = 0 ; 
        int res = 0 ;
        sort(nums.begin() , nums.end() , greater<int>());
        for(auto it : nums){
            sum += it;
            if(sum>0) res++;
        }
        return res;
    }
};