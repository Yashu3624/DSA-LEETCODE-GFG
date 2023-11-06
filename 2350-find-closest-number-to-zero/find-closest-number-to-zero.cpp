class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n = nums.size() ; 
        vector<int> res;
        for(int i : nums) {
            res.push_back(abs(i));
        }
        
        int k = *min_element(res.begin(), res.end());
        
        if(find(nums.begin(), nums.end(), k) != nums.end()) {
            return k;
        }
        
        return -k;
    }
};