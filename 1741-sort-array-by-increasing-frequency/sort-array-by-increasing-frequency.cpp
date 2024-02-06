class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>res ; 
        unordered_map<int,int>mp ; 
        for(int i = 0 ; i < nums.size()  ; i++){
            mp[nums[i]]++;
        }
         priority_queue<pair<int,int>> p;
         for(auto it : mp){
             p.push({it.second *(-1),it.first});
         }
         while(!p.empty()){
             int n = p.top().first*(-1);
             while(n--){
                 res.push_back(p.top().second);
             }
             p.pop();
         }
         return res;
    }
};