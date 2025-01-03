class Solution {
    public int waysToSplitArray(int[] nums) {
        long  sum = 0 ; 
        for(int i : nums){
            sum += i ;
        }
        int ways = 0 ;
        long  total = 0 ;  
        for(int i = 0 ; i < nums.length-1 ; i++){
            total += nums[i] ; 
            sum -= nums[i] ; 
            if(total>=sum) ways += 1; 

        } 
    
        return ways ;
    }
}