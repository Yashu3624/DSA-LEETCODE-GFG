class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n = nums.size() -1 ;
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            int j = i+1 ; 
            int k = n ;
            while(j<k){

            
            int val = nums[j]-nums[i];
            int val2 = nums[k]-nums[j];
            if(val==diff && val2==diff){
                cnt++;
                j++;
                k--;
            }
            else if(val<diff){
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