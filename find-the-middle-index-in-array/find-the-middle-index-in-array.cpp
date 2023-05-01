class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int i = 0 ;
        int n = nums.size();
        while(i<n){
            int sum1 = 0 , sum2 = 0 ;
            for(int  j = 0 ; j < i  ; j++){
                sum1 += nums[j];
            }
            for(int k = i+1 ; k < n ; k++){
                sum2 += nums[k];
            }
            if(sum1==sum2){
                return i ;
            }
            i++;
        }
        return -1;
    }
};