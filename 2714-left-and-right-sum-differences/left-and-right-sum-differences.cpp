class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>left,res ;
        int sum = 0 ;
        int n = nums.size();

        for(int i = 0 ; i < n ; i++){
            left.push_back(sum);
            sum += nums[i];
        }
         sum = 0;
        vector<int>right(n,0);
        for(int i = n-1 ; i>=0 ; i-- ){
            right[i] = sum ; 
            sum += nums[i];
        }
        
        for(int i = 0 ; i < n - 1; i++){
            left[i] = abs(left[i]-right[i]);
        }
        return left;
        
    }
};