class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>left,right ;
        int l_sum = 0 ;
        int r_sum = 0;
        int n = nums.size();

        for(int i = 0 ; i < n ; i++){
            left.push_back(l_sum);
            right.push_back(r_sum);
            l_sum += nums[i];
            r_sum += nums[n-i-1];
        }
         
        
        for(int i = 0 ; i < n; i++){
            left[i] = abs(left[i]-right[n-i-1]);
        }
        return left;
        
    }
};