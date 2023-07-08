class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele ; 
        int cnt = 0 ;
        for(int i  = 0 ; i < nums.size() ; i++){
            if(cnt == 0){
                cnt = 1 ;
                ele = nums[i];
            }
            else if(ele==nums[i])
            cnt++;
            else
            cnt--;
        }
        int count = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(ele==nums[i]){
                count++;
            }
        }
        if(count>(nums.size()/2))
        return ele;
        return -1;
    }
};