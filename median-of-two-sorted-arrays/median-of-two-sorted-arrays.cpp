class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        for(auto num:nums1){
            res.push_back(num);
        }
        for(auto num:nums2){
            res.push_back(num);
        }
        sort(res.begin() , res.end());
        int mid = res.size() /2;
        if(res.size()%2==1){
            return res[mid];
        }
        else{
            return( res[mid-1]+res[mid])/2.0;
        }
        
    }
};