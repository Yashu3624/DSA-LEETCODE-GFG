class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res ; 
        unordered_map<int,int>mp ;
        for(int i : nums){
            mp[i]++;
        }
         priority_queue<pair<int,int>> p;
         for(auto it : mp){
             p.push({it.second,it.first});
         }
         while(k--){
             res.push_back(p.top().second);
             p.pop();
         }
         return res;
    }
};