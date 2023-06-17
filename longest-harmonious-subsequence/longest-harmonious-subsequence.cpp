class Solution {
public:
    int findLHS(vector<int>& nums) {
        int res = 0 ;
       unordered_map<int,int>mp ;
       for(auto i: nums){
       mp[i]++;
       }
       for(auto [a,b] :mp){
           if(mp.count(a+1)){
               res = max(res,mp[a]+mp[a+1]);
           }
       }
       return res;
    }
};