class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>st ; 
        for(auto i : nums1){
            for(auto j : nums2){
                if(i==j){
                    st.insert(i);
                }
            }
        }
        vector<int>res ; 
        for(auto i : st){
            res.push_back(i);
        }
        return res;        
    }
};