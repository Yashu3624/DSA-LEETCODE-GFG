class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>res;
        int sum = 0 , ans = 0;
        res[sum]=1 ;
        for(auto it: nums){
            sum += it;
            int diff = sum-k;
            if(res.find(diff)!=res.end()){
                ans += res[diff];
            }
            res[sum]++;
        }
        return ans ;
    }
};