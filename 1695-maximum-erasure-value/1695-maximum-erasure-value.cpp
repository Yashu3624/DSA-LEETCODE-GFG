class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size() ;
        unordered_set<int>st ; 
        int total = 0; 
        int maxSum = INT_MIN ; 
        int i = 0 , j  = 0 ; 
        while( j < n){
            if(!st.count(nums[j])){
                st.insert(nums[j]) ; 
                total += nums[j] ; 
                maxSum = max(maxSum,total) ;
                j++ ;
            }
            else{
                while(i < n && st.count(nums[j])){
                    total -= nums[i] ; 
                    st.erase(nums[i]) ; 
                    i++ ;
                }
            }
        }
        return maxSum ; 
        
    }
};