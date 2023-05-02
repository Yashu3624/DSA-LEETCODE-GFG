class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int>sum1;
        int res = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            sum1.push_back(res);
            res += nums[i];
        }
    vector<int>sum2;
    int ans = 0 ;
    reverse(nums.begin(),nums.end());
    for(int i = 0 ; i < nums.size(); i++){
        sum2.push_back(ans);
        ans += nums[i];
    }
    reverse(sum2.begin() , sum2.end());
    vector<int>sol;
    for(int i = 0 ; i < nums.size() ;i++){
        int a = abs(sum1[i]-sum2[i]);
        sol.push_back(a);
    }
    return sol;
    }
};