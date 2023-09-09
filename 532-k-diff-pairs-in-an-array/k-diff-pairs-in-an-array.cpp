class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        set<pair<int,int>>st ; 
        sort(nums.begin(),nums.end());
        int i = 0 ; 
        int j = 1;
        int ans = 0 ;
        while(j<nums.size()){
            int  diff = nums[j]-nums[i];
            if(diff==k){
                st.insert({nums[i],nums[j]});
                i++;
                j++;

            }
            else if(diff>k){
                i++;
                
            }
            
            else{
                j++;
            }
             if(i==j){
                j++;
            }

        }
        return st.size();

    }
};