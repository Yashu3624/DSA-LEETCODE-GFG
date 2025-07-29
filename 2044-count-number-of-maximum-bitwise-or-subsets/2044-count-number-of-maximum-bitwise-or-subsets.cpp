class Solution {
public:
    void findMaxOrSubSets(int idx , int res , vector<int>&nums , int sum , int& cnt ){
        if(idx>=nums.size()){
        if(res==sum){
            cnt++ ;
        }
        return ;
        }
        findMaxOrSubSets(idx+1,res|nums[idx],nums , sum , cnt) ;
        findMaxOrSubSets(idx+1,res,nums,sum,cnt) ;
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int sum = 0 ; 
        int cnt = 0 ; 
        for(int i : nums){
            sum |= i ;
        }
        findMaxOrSubSets(0,0,nums,sum,cnt) ;
        return cnt ;
    }
};