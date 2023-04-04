class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int>res ;
        
        set<int>ans ;
        
        for(auto x: nums){
            ans.insert(x);
        }
        
        for(int i = 1 ; i <= n ; i++){
            
            if(ans.find(i) == ans.end()){
                res.push_back(i);
            }
            
        }
        
        return res;
        
    }
};