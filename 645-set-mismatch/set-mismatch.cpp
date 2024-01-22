class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>res ;
        unordered_map<int,int>mp ;
        for(int i : nums){
            mp[i]++;
            if(mp[i]>1) res.push_back(i);
        }
        for(int i =   1 ; i <= nums.size() ; i++){
            if(mp.find(i)==mp.end()) res.push_back(i);
                    }
        return res;
    }
};