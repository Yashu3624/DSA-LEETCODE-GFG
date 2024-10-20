class Solution {
public:
    int findDiv(int num){
        for(int i = 2 ; i*i <= num ; i++){
            if(num%i==0) return i ;
        }
        return 1 ;
    }
    int minOperations(vector<int>& nums) {
      int n = nums.size() ; 
      int operations = 0 ;
      for(int i = n-2 ; i>=0 ; i--){
        if(nums[i]>nums[i+1]){
            int divisor = findDiv(nums[i]) ;
            if(divisor==1) return -1 ;
            nums[i] = divisor;
            operations++ ;
        }
      }
      return operations ;
    }
};