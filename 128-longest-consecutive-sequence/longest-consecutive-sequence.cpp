class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st ;
        for(int num : nums){
            st.insert(num);
        }
        int maxi = 0 ; 
        for(int num: nums){
            if(!st.count(num-1)){
                int curr = num ; 
                int cnt = 1 ; 
                while(st.count(curr+1)){
                    curr += 1;
                    cnt += 1;
                }
                maxi = max(maxi , cnt);
            }
        }
        return maxi ;
    }
};
