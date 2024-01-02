class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp ;
        int maxi = 0;
        for(int i : nums){
            mp[i]++;
            maxi = max(maxi ,mp[i]);
        }
        vector<vector<int>>res;
        while(n>0){
            for(int i = 0 ; i < maxi ; i++){
            vector<int>temp;
            for(auto it: mp){
                if(it.second!=0){
                    temp.push_back(it.first);
                    n--;
                    mp[it.first]--;
                }
            }
            res.push_back(temp);
        }
        }
        return res;
    }
};