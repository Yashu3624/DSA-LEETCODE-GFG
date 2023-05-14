class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        vector<int>res;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]==i%10){
                res.push_back(i);
            }
        }
        if(res.size()==0)
        return -1 ;
        else
        return *min_element(res.begin(),res.end());
    }
};