class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>res ; 
        unordered_map<int,int>mp;
        int n = nums.size() / 3 ; 
        for(auto it : nums){
            mp[it]++;
        }
        for(auto it : mp){
            if(it.second>n){
                res.push_back(it.first);
            }
        }
        return res;
    }
};