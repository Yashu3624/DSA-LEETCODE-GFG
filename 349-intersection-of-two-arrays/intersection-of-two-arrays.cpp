class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp ; 
        for(auto x : nums1){
            mp[x] = 1 ;
        }
        vector<int>res;
        for(auto x : nums2){
            if(mp[x]==1){
                res.push_back(x);
                mp[x] = 0 ;
            }
        }
        return res;
    }
};