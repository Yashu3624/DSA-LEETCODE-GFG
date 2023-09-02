class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        vector<int>digi;
        for(int i = n-1 ; i >= 0 ; i--){
            int num = nums[i];
            while(num){
                digi.push_back(num%10);
                num /= 10;
            }
        }
        reverse(digi.begin(),digi.end());
        return digi;
    }
};