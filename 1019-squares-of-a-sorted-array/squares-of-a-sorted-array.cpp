class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0 ; 
        int j = nums.size()-1;
        int k = nums.size()-1;
        vector<int>res(nums.size(),0);
        while(i<=j){
            if(abs(nums[i])>=abs(nums[j])){
            res[k] = nums[i]*nums[i];
            i++;
            k--;
            }
            else{
                res[k] = nums[j]*nums[j];
                j--;
                k--;
            }
        }
        return res;
    }
};