class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        if(n==1) return;
        k = k%n;
        reverse(arr.begin()+n-k,arr.end());
        reverse(arr.begin(),arr.begin()+n-k);
        reverse(arr.begin(),arr.end());
        
    }
};