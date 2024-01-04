class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt = 0 ;
        unordered_map<int,int>mp ; 
        for(int i : nums){
            mp[i]++;
        }
        for(auto it : mp){
            if(it.second==1) return -1 ;
            else{
                int x = it.second ;
                if(x%3==0) 
                cnt += x/3;
                else
                cnt += x/3 + 1 ;
                
            }
        }
        return cnt ;
    }
};