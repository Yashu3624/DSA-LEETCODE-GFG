class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long total = accumulate(nums.begin() , nums.end(),0LL) ; 
        int remainder = total % p ; 
        if(remainder == 0 ) return 0 ;
        int n = nums.size();
        int minLength = n;
        int prefixSum = 0;
        unordered_map<int, int> prefixSums;
     for (int i = 0; i < n; i++) {
            prefixSum = (prefixSum + nums[i]) % p;
            int target = (prefixSum - remainder + p) % p;

            if (prefixSums.find(target) != prefixSums.end()) {
                minLength = min(minLength, i - prefixSums[target]);
            }

            prefixSums[prefixSum] = i;
        }

        return minLength == n ? -1 : minLength;

    }
};