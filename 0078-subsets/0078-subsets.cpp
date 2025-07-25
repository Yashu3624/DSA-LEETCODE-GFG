class Solution {
public:
    void solve(vector<int>&nums , vector<int>&res , vector<vector<int>>&ans , int idx , int n ){
        if(idx>=n){
            ans.push_back(res) ; 
            return ; 
        }
        res.push_back(nums[idx]) ; 
        solve(nums , res , ans , idx+1 , n ) ; 
        res.pop_back() ; 
        solve(nums,res,ans,idx+1, n) ; 
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size()  ; 
        vector<vector<int>>ans ;
        vector<int>res ; 
        solve(nums , res , ans , 0 , n ) ;
        return ans ; 
    }
};