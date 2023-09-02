class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = 0 , max2 = 0 ; 
        for(auto it : nums){
            if(max1<it){
                max2 = max1;
                max1 = it ;
            }
            else if(max2<it){
                max2 = it;
            }
        }
        return (max2-1)*(max1-1);
    }
};