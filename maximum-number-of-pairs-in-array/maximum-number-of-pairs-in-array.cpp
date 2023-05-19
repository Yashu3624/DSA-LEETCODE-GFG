class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>res;
        for(int i = 0 ; i < nums.size() ; i++){
            res[nums[i]]++;
        }
        int cnt = 0 , cnt1 = 0 ;
        for(auto it: res){
            int a  = it.second;
            cnt1 += a%2;
            cnt += a/2;
        }
        return {cnt,cnt1};
        
    }
};