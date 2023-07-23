class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>res ;
        map<int,int>mp;
        int n = nums.size();
        int min = n/3+1;
        for(int i = 0 ; i < n ; i++){
            mp[nums[i]]++;
            if(min==mp[nums[i]]){
                res.push_back(nums[i]);
            }
            if(res.size()==2) break;
        }
        sort(res.begin() , res.end());
        return res;        
    }
};