class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int>mp;
        vector<int>res;
        int cnt = nums.size();
        for(auto i : nums){
            for(int j : i){
                mp[j]++;
                if(mp[j]==cnt){
                    res.push_back(j);
                }
            }
        }
        sort(res.begin() , res.end());
        return res;
    }
};