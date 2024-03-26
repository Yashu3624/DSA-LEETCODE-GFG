class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int>st ; 
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            st.insert(nums[i]);
        }
        int j = 1; 
        while(j<=n){
            if(st.find(j)!=st.end()) j++;
            else return j ;
        }
        return j ;
    }
};