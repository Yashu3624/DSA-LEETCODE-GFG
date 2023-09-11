class Solution {
public:
    void subSeq(int idx , vector<int>sub ,vector<vector<int>>&ans ,vector<int>& nums,int n   ){

        if(idx>=n){
            ans.push_back(sub);
            return ;
        }
        sub.push_back(nums[idx]);
        subSeq(idx+1,sub,ans,nums,n); 
        sub.pop_back();
        subSeq(idx+1,sub,ans,nums,n);



    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>sub ; 
        vector<vector<int>>ans ; 
        int n = nums.size();
        int idx = 0 ; 
        subSeq(idx,sub,ans,nums,n);
        return ans ; 
    }
};