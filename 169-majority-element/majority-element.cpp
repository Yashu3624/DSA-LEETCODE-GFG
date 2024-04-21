class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele ; 
        int cnt = 0 ;
        int n = nums.size() ;
        for(int i = 0 ; i < n ; i++){
            if(cnt == 0 ){
                cnt = 1; 
                ele = nums[i];
            }
            else if(ele==nums[i]) cnt++;
            else cnt--;
        }
        int res = 0 ; 
        for(int i = 0 ; i < n ; i++){
            if(ele==nums[i]){
                res++ ;
            }
        }
        if(res>n/2) return ele;
        return -1;
    }
};