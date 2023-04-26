class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>res ;
        for(auto i : nums){
            res[i]++;
        }
        for(auto[i,freq]:res){
            if(freq==1)
                return i ;
        }
        return -1 ;
        
    }
};