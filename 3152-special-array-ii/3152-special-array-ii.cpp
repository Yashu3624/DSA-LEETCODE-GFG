class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<bool>ans ; 
        int n = nums.size() ; 
        vector<bool>even(n);
        for(int i = 0 ; i < n ; i++){
            even[i] = (nums[i]%2==0);
        }
        for(const auto& it : queries){
            int start = it[0] , end = it[1];
            bool res = true ;
            
            for(int  i  = start ; i < end ; i++){
                if(even[i]==even[i+1]){
                    res = false;
                    break;
                }
            }
            ans.push_back(res);
        }
        return ans ;
    }
};