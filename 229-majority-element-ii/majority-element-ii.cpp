class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>res ; 
        unordered_map<int,int>mp ; 
        int n = nums.size()/3;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
        }
        for(auto i : mp){
            if(i.second>n){
                res.push_back(i.first);
            }
        }
        return res;
    }
};