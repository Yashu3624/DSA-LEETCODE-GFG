class Solution {

public:

int len_dist(int val , vector<int>&nums){
    set<int>s ;
    for(int i = val ; i < nums.size() ; i++){
        s.insert(nums[i]);
    }
    return s.size();
}
int dist(int val , vector<int>&nums){
    set<int>s ;
    for(int i = 0 ; i < val ; i++){
        s.insert(nums[i]);
    }
    return s.size();
}


public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int>res ; 
        int k , j ; 
        for(int i = 0 ; i < nums.size() ; i++)
        {
            k = len_dist(i+1 , nums);
            j = dist(i+1,nums);
            res.push_back(j-k);

        }
        return res;
    }
};