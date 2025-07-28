class Solution {
public:
    void findCnt(int idx , int res , vector<int>&nums , int sum , int& cnt){
       
        if(idx>=nums.size()){
            if(res==sum){
                cnt++;
                
            }
            return ;
            
        }
        findCnt(idx+1 , res|nums[idx] , nums ,sum ,cnt) ;
        findCnt(idx+1 , res , nums ,sum , cnt) ; 
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int sum = 0 ;
        for(int i : nums){
            sum |= i ;
        }
        int cnt = 0 ;
       findCnt(0 , 0 , nums , sum , cnt) ;
       return cnt ; 
    }
};