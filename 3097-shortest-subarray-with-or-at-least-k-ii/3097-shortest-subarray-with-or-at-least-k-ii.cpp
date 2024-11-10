class Solution {
public:
    void f(int num, int& OR, vector<int>& bitCnt) {
        for(int i = 0; i < 32; i++) {
            if(num & (1 << i)) {
                bitCnt[i] += 1;
                OR |= (1 << i); 
            }
        }
    }
    
    void solve(int num, int& OR, vector<int>& bitCnt) {
        for(int i = 0; i < 32; i++) {
            if(num & (1 << i)) {
                bitCnt[i] -= 1;
                if(bitCnt[i] == 0) {
                    OR &= ~(1 << i); 
                }
            }
        }
    }
    
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int ans = INT_MAX;
        int OR = 0;
        vector<int> bitCnt(32, 0);
        int l = 0, r = 0;
        
        while(r < nums.size()) {
            f(nums[r], OR, bitCnt);
            
            while(l <= r && OR >= k) { // Condition changed to OR >= k
                ans = min(ans, r - l + 1);
                solve(nums[l], OR, bitCnt);
                l++;
            }
            
            r++;
        }
        
        return (ans == INT_MAX) ? -1 : ans;
    }
};
