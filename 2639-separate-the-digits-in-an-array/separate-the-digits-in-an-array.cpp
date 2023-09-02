class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>digi;
        for(int i = 0 ; i < nums.size() ; i++){
            int n = nums[i];
            int cnt = 0 ;
            while(n){
                n /= 10 ;
                cnt++;
            }
            int num = nums[i];
            int p = pow(10,cnt-1);
            while(p){
                digi.push_back(num/p);
                num = num%p;
                p /= 10 ;
            }
        }
        return digi;
    }
};