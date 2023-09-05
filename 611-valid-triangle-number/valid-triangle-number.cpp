class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end(),greater<int>());
        int n = nums.size();
        int cnt = 0 ;
        for(int i = 0 ;i < n-2 ; i++){
            int j = i+1 ;
            int k = n-1 ; 
            while(j<k){
                
                if(nums[j]+nums[k]>nums[i] ){
                    cnt +=(k-j);
                    j++;
                }
                else{
                    k--;
                }
            }
        }
    return cnt;
    }
};