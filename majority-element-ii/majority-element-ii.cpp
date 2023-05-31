class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp ;
        vector<int>res;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            mp[nums[i]]++;
        }
        int m = n/3;
        for(auto i : mp){
            if(i.second>m){
                res.push_back(i.first);
            }
        }
        return res;
    }
};