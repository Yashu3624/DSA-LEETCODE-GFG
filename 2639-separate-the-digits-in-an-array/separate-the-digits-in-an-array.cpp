class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>digi;
        for(int num : nums){
            int n = num ; 
            vector<int>temp;
            while(n){
                temp.push_back(n%10);
                n /= 10;
                
            }
            reverse(temp.begin() , temp.end());
            for(auto it : temp)
            digi.push_back(it);
            
        }
        return digi;
    }
};