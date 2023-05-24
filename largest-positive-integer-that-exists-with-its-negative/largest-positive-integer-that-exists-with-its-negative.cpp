class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int res = -1;
        for(int i : nums){
            for(int j : nums){
                if(i==-j)
                res = max(res,abs(i));
            }
        }
        return res;
    }
};