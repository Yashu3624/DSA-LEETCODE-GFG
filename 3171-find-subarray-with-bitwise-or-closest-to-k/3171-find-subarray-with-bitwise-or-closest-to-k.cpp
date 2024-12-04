class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        unordered_set<int>prev , curr ; 
        int ans = INT_MAX ; 
        for(int i : nums){
            curr = {i} ; 
            for(int j : prev) curr.insert(i|j) ; 
            prev = curr ; 
            for(int j : prev) ans = min(ans,abs(k-j)) ; 
        }
        return ans ;
    }
};