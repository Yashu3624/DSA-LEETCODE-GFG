class Solution {
public:

    void solve(vector<int>& candidates, int target, vector<vector<int>>&ans , int idx , vector<int>&res){
        int n = candidates.size();
        if(idx==n){
            if(target==0){
                ans.push_back(res);
            }
            return ;
        }
        if(candidates[idx]<=target){
            res.push_back(candidates[idx]);
            solve(candidates,target-candidates[idx],ans,idx,res);
            res.pop_back();
        }
        solve(candidates,target,ans,idx+1,res);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans ;
        vector<int>res ;
        sort(candidates.begin(),candidates.end());
        solve(candidates,target,ans,0,res);
        return ans;
    }
};