class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        set<int>mp ;
        vector<int>res; 
        for(int i : nums){
            if(mp.find(i)!=mp.end()){
                res.push_back(i);
            }
            else{
                mp.insert(i);
            }
        }
        return res;
    }
};