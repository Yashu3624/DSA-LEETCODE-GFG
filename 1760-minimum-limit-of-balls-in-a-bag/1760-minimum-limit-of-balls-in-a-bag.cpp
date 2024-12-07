class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int sum = 0 ; 
        for(int i : nums) sum += i ; 
        int n = nums.size() ; 
        int rem = (sum)/(n+maxOperations) ; 
        return rem;
    }
};